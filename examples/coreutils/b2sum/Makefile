


b2sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/b2sum
	cp ../coreutils_source/coreutils/src/b2sum .
	get-bc b2sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/b2sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc b2sum slash *_slashed *log
