


cksum.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/cksum
	cp ../coreutils_source/coreutils/src/cksum .
	get-bc cksum


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/cksum:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc cksum slash *_slashed *log
