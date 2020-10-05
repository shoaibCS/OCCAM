


join.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/join
	cp ../coreutils_source/coreutils/src/join .
	get-bc join


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/join:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc join slash *_slashed *log
