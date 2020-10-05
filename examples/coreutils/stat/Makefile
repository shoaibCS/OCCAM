


stat.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/stat
	cp ../coreutils_source/coreutils/src/stat .
	get-bc stat


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/stat:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc stat slash *_slashed *log
