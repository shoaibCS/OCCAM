


seq.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/seq
	cp ../coreutils_source/coreutils/src/seq .
	get-bc seq


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/seq:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc seq slash *_slashed *log
