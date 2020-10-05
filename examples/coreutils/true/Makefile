


true.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/true
	cp ../coreutils_source/coreutils/src/true .
	get-bc true


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/true:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc true slash *_slashed *log
