


logname.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/logname
	cp ../coreutils_source/coreutils/src/logname .
	get-bc logname


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/logname:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc logname slash *_slashed *log
