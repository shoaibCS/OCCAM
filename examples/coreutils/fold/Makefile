


fold.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/fold
	cp ../coreutils_source/coreutils/src/fold .
	get-bc fold


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/fold:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc fold slash *_slashed *log
