


readlink.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/readlink
	cp ../coreutils_source/coreutils/src/readlink .
	get-bc readlink


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/readlink:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc readlink slash *_slashed *log
