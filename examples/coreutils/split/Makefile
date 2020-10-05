


split.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/split
	cp ../coreutils_source/coreutils/src/split .
	get-bc split


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/split:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc split slash *_slashed *log
