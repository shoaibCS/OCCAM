


ptx.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/ptx
	cp ../coreutils_source/coreutils/src/ptx .
	get-bc ptx


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/ptx:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc ptx slash *_slashed *log
