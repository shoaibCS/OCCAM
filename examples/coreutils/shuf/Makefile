


shuf.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/shuf
	cp ../coreutils_source/coreutils/src/shuf .
	get-bc shuf


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/shuf:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc shuf slash *_slashed *log
