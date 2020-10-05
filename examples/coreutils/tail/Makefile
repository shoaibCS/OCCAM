


tail.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/tail
	cp ../coreutils_source/coreutils/src/tail .
	get-bc tail


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/tail:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc tail slash *_slashed *log
