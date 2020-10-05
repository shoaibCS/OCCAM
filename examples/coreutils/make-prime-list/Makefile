


make-prime-list.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/make-prime-list
	cp ../coreutils_source/coreutils/src/make-prime-list .
	get-bc make-prime-list


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/make-prime-list:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc make-prime-list slash *_slashed *log
