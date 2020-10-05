


tr.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/tr
	cp ../coreutils_source/coreutils/src/tr .
	get-bc tr


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/tr:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc tr slash *_slashed *log
