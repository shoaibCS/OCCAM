


mkdir.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/mkdir
	cp ../coreutils_source/coreutils/src/mkdir .
	get-bc mkdir


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/mkdir:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc mkdir slash *_slashed *log
