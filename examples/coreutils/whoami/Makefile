


whoami.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/whoami
	cp ../coreutils_source/coreutils/src/whoami .
	get-bc whoami


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/whoami:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc whoami slash *_slashed *log
