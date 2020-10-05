


md5sum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/md5sum
	cp ../coreutils_source/coreutils/src/md5sum .
	get-bc md5sum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/md5sum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc md5sum slash *_slashed *log
