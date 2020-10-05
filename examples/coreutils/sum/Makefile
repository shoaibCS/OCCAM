


sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sum
	cp ../coreutils_source/coreutils/src/sum .
	get-bc sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sum slash *_slashed *log
