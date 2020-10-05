


paste.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/paste
	cp ../coreutils_source/coreutils/src/paste .
	get-bc paste


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/paste:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc paste slash *_slashed *log
