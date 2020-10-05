


getlimits.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/getlimits
	cp ../coreutils_source/coreutils/src/getlimits .
	get-bc getlimits


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/getlimits:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc getlimits slash *_slashed *log
