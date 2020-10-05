


users.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/users
	cp ../coreutils_source/coreutils/src/users .
	get-bc users


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/users:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc users slash *_slashed *log
