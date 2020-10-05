


expand.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/expand
	cp ../coreutils_source/coreutils/src/expand .
	get-bc expand


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/expand:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc expand slash *_slashed *log
