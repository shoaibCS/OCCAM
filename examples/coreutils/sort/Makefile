


sort.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sort
	cp ../coreutils_source/coreutils/src/sort .
	get-bc sort


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sort:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sort slash *_slashed *log
