


tac.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/tac
	cp ../coreutils_source/coreutils/src/tac .
	get-bc tac


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/tac:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc tac slash *_slashed *log
