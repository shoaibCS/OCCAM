


dircolors.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/dircolors
	cp ../coreutils_source/coreutils/src/dircolors .
	get-bc dircolors


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/dircolors:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc dircolors slash *_slashed *log
