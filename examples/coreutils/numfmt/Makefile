


numfmt.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/numfmt
	cp ../coreutils_source/coreutils/src/numfmt .
	get-bc numfmt


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/numfmt:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc numfmt slash *_slashed *log
