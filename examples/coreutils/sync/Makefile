


sync.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sync
	cp ../coreutils_source/coreutils/src/sync .
	get-bc sync


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sync:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sync slash *_slashed *log
