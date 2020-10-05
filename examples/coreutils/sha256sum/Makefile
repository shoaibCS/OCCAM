


sha256sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sha256sum
	cp ../coreutils_source/coreutils/src/sha256sum .
	get-bc sha256sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sha256sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sha256sum slash *_slashed *log
