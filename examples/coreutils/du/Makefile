


du.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/du
	cp ../coreutils_source/coreutils/src/du .
	get-bc du


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/du:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc du slash *_slashed *log
