


ls.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/ls
	cp ../coreutils_source/coreutils/src/ls .
	get-bc ls


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/ls:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc ls slash *_slashed *log
