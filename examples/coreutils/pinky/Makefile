


pinky.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/pinky
	cp ../coreutils_source/coreutils/src/pinky .
	get-bc pinky


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/pinky:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc pinky slash *_slashed *log
