


ln.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/ln
	cp ../coreutils_source/coreutils/src/ln .
	get-bc ln


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/ln:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc ln slash *_slashed *log
