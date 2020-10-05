


id.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/id
	cp ../coreutils_source/coreutils/src/id .
	get-bc id


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/id:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc id slash *_slashed *log
