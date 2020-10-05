


mknod.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/mknod
	cp ../coreutils_source/coreutils/src/mknod .
	get-bc mknod


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/mknod:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc mknod slash *_slashed *log
