


dd.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/dd
	cp ../coreutils_source/coreutils/src/dd .
	get-bc dd


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/dd:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc dd slash *_slashed *log
