


csplit.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/csplit
	cp ../coreutils_source/coreutils/src/csplit .
	get-bc csplit


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/csplit:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc csplit slash *_slashed *log
