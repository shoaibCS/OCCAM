


printenv.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/printenv
	cp ../coreutils_source/coreutils/src/printenv .
	get-bc printenv


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/printenv:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc printenv slash *_slashed *log
