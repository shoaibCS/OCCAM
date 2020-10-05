


false.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/false
	cp ../coreutils_source/coreutils/src/false .
	get-bc false


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/false:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc false slash *_slashed *log
