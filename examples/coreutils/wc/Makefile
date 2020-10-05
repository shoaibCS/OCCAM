


wc.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/wc
	cp ../coreutils_source/coreutils/src/wc .
	get-bc wc


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/wc:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc wc slash *_slashed *log
