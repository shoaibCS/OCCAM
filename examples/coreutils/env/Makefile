


env.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/env
	cp ../coreutils_source/coreutils/src/env .
	get-bc env


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/env:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc env slash *_slashed *log
