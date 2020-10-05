


mkfifo.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/mkfifo
	cp ../coreutils_source/coreutils/src/mkfifo .
	get-bc mkfifo


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/mkfifo:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc mkfifo slash *_slashed *log
