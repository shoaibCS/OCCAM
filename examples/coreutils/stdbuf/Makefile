


stdbuf.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/stdbuf
	cp ../coreutils_source/coreutils/src/stdbuf .
	get-bc stdbuf


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/stdbuf:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc stdbuf slash *_slashed *log
