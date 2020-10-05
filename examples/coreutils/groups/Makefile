


groups.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/groups
	cp ../coreutils_source/coreutils/src/groups .
	get-bc groups


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/groups:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc groups slash *_slashed *log
