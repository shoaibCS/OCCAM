


realpath.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/realpath
	cp ../coreutils_source/coreutils/src/realpath .
	get-bc realpath


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/realpath:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc realpath slash *_slashed *log
