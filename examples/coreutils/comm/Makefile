


comm.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/comm
	cp ../coreutils_source/coreutils/src/comm .
	get-bc comm


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/comm:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc comm slash *_slashed *log
