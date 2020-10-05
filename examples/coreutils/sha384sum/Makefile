


sha384sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sha384sum
	cp ../coreutils_source/coreutils/src/sha384sum .
	get-bc sha384sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sha384sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sha384sum slash *_slashed *log
