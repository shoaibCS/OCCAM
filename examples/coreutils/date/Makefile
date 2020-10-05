


date.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/date
	cp ../coreutils_source/coreutils/src/date .
	get-bc date


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/date:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc date slash *_slashed *log
