


nice.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/nice
	cp ../coreutils_source/coreutils/src/nice .
	get-bc nice


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/nice:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc nice slash *_slashed *log
