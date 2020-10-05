


mktemp.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/mktemp
	cp ../coreutils_source/coreutils/src/mktemp .
	get-bc mktemp


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/mktemp:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc mktemp slash *_slashed *log
