


tty.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/tty
	cp ../coreutils_source/coreutils/src/tty .
	get-bc tty


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/tty:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc tty slash *_slashed *log
