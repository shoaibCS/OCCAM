


base32.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/base32
	cp ../coreutils_source/coreutils/src/base32 .
	get-bc base32


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/base32:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc base32 slash *_slashed *log
