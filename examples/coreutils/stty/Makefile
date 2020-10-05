


stty.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/stty
	cp ../coreutils_source/coreutils/src/stty .
	get-bc stty


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/stty:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc stty slash *_slashed *log
