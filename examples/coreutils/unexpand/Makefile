


unexpand.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/unexpand
	cp ../coreutils_source/coreutils/src/unexpand .
	get-bc unexpand


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/unexpand:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc unexpand slash *_slashed *log
