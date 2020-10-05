


shred.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/shred
	cp ../coreutils_source/coreutils/src/shred .
	get-bc shred


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/shred:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc shred slash *_slashed *log
