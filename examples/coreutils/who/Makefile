


who.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/who
	cp ../coreutils_source/coreutils/src/who .
	get-bc who


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/who:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc who slash *_slashed *log
