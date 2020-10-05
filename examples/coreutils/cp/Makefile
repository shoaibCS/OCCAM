


cp.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/cp
	cp ../coreutils_source/coreutils/src/cp .
	get-bc cp


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/cp:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc cp slash *_slashed *log
