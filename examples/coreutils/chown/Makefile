


chown.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/chown
	cp ../coreutils_source/coreutils/src/chown .
	get-bc chown


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/chown:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc chown slash *_slashed *log
