


vdir.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/vdir
	cp ../coreutils_source/coreutils/src/vdir .
	get-bc vdir


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/vdir:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc vdir slash *_slashed *log
