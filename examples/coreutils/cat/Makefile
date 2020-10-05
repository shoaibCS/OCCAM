


cat.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/cat
	cp ../coreutils_source/coreutils/src/cat .
	get-bc cat


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/cat:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc cat slash *_slashed *log
