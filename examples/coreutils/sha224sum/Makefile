


sha224sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sha224sum
	cp ../coreutils_source/coreutils/src/sha224sum .
	get-bc sha224sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sha224sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sha224sum slash *_slashed *log
