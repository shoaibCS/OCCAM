


basenc.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/basenc
	cp ../coreutils_source/coreutils/src/basenc .
	get-bc basenc


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/basenc:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc basenc slash *_slashed *log
