


sha1sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sha1sum
	cp ../coreutils_source/coreutils/src/sha1sum .
	get-bc sha1sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sha1sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sha1sum slash *_slashed *log
