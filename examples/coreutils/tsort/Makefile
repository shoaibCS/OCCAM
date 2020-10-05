


tsort.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/tsort
	cp ../coreutils_source/coreutils/src/tsort .
	get-bc tsort


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/tsort:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc tsort slash *_slashed *log
