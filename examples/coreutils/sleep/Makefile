


sleep.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/sleep
	cp ../coreutils_source/coreutils/src/sleep .
	get-bc sleep


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/sleep:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc sleep slash *_slashed *log
