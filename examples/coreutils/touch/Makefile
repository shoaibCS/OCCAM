


touch.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/touch
	cp ../coreutils_source/coreutils/src/touch .
	get-bc touch


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/touch:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc touch slash *_slashed *log
