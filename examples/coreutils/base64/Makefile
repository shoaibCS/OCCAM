


base64.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/base64
	cp ../coreutils_source/coreutils/src/base64 .
	get-bc base64


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/base64:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc base64 slash *_slashed *log
