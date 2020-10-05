


uname.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/uname
	cp ../coreutils_source/coreutils/src/uname .
	get-bc uname


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/uname:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc uname slash *_slashed *log
