


sha512sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sha512sum
	cp ../coreutils_source/coreutils/src/sha512sum .
	get-bc sha512sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sha512sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sha512sum slash *_slashed *log
