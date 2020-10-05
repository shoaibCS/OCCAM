


df.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/df
	cp ../coreutils_source/coreutils/src/df .
	get-bc df


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/df:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc df slash *_slashed *log
