


dir.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/dir
	cp ../coreutils_source/coreutils/src/dir .
	get-bc dir


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/dir:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc dir slash *_slashed *log
