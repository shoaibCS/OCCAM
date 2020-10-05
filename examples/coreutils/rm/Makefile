


rm.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/rm
	cp ../coreutils_source/coreutils/src/rm .
	get-bc rm


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/rm:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc rm slash *_slashed *log
