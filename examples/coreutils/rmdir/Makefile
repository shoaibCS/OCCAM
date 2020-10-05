


rmdir.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/rmdir
	cp ../coreutils_source/coreutils/src/rmdir .
	get-bc rmdir


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/rmdir:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc rmdir slash *_slashed *log
