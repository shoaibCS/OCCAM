


test.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/test
	cp ../coreutils_source/coreutils/src/test .
	get-bc test


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/test:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc test slash *_slashed *log
