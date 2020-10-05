


cut.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/cut
	cp ../coreutils_source/coreutils/src/cut .
	get-bc cut


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/cut:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc cut slash *_slashed *log
