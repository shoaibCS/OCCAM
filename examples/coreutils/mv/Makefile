


mv.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/mv
	cp ../coreutils_source/coreutils/src/mv .
	get-bc mv


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/mv:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc mv slash *_slashed *log
