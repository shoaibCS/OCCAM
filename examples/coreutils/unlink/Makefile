


unlink.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/unlink
	cp ../coreutils_source/coreutils/src/unlink .
	get-bc unlink


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/unlink:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc unlink slash *_slashed *log
