


timeout.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/timeout
	cp ../coreutils_source/coreutils/src/timeout .
	get-bc timeout


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/timeout:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc timeout slash *_slashed *log
