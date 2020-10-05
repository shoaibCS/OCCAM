


link.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/link
	cp ../coreutils_source/coreutils/src/link .
	get-bc link


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/link:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc link slash *_slashed *log
