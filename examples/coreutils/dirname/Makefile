


dirname.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/dirname
	cp ../coreutils_source/coreutils/src/dirname .
	get-bc dirname


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/dirname:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc dirname slash *_slashed *log
