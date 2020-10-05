


factor.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/factor
	cp ../coreutils_source/coreutils/src/factor .
	get-bc factor


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/factor:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc factor slash *_slashed *log
