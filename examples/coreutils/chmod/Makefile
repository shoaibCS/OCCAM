


chmod.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/chmod
	cp ../coreutils_source/coreutils/src/chmod .
	get-bc chmod


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/chmod:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc chmod slash *_slashed *log
