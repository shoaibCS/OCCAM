WGET=wget
WGET_BITCODE=${WGET}.bc
WGET_VERSION=1.17.1
WGET_NAME=${WGET}-${WGET_VERSION}
WGET_TAR=${WGET_NAME}.orig.tar.gz
WGET_RC=wgetrc
WGET_PATCH=wget.patch

WGET_MANIFEST=${WGET}.manifest

OUT_DIR?=trimmer
LOG_FILE?=logs

BITCODE_WRAPPER?=gclang
BITCODE_EXTRACT?=get-bc
OPT_NAME=opt-10
CFLAGS = -mem2reg -loops -lcssa -loop-simplify -loop-rotate -indvars


all: ${WGET_BITCODE}

compress: ${OUT_DIR}
	cp ${WGET_BITCODE} ${OUT_DIR} && \
	cp wgetrc ${OUT_DIR} && \
	cd ${OUT_DIR} && \
  	echo '{"binary": "wget_fin", "native_libs":[],"name": "wget", "args": ["--config=wgetrc","_" ], "modules": [], "ldflags": ["-luuid","-lgnutls","-lpcre", "-lnettle", "-lidn", "-lz", "-lpthread"], "main": "wget.bc", "config_files": ["wgetrc"]}' > ${WGET_MANIFEST} && \
	python ${TRIMMER_HOME}/tool/trimmer.py ${WGET_MANIFEST} ./ modData 1 2> ${LOG_FILE}

.PHONY: ${WGET_BITCODE}
${WGET_BITCODE}: ${WGET_NAME}
	cp ${WGET_PATCH} ${WGET_NAME} && \
	cd ${WGET_NAME} && \
	patch -p0 -f -R -i ./${WGET_PATCH} && \
	CC=${BITCODE_WRAPPER} CFLAGS="-O0 -Xclang -disable-O0-optnone -fno-inline -fno-inline-functions" ./configure && \
	CC=${BITCODE_WRAPPER} make && \
	cd src && \
	${BITCODE_EXTRACT} ${WGET} && \
	${OPT_NAME} ${CFLAGS} ${WGET_BITCODE} -o ${WGET_BITCODE} && \
	mv ${WGET_BITCODE} ../../
		
${OUT_DIR}:
	mkdir -p ${OUT_DIR}

${WGET_NAME}:
	tar -xvzf ./${WGET_TAR}

clean:
	rm -rf ${WGET_NAME}
	rm *.bc *_slashed *_slashed_stripped
	rm -r ${OUT_DIR}
