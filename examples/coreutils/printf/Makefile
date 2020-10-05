


printf.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/printf
	cp ../coreutils_source/coreutils/src/printf .
	get-bc printf


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/printf:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc printf slash *_slashed *log
