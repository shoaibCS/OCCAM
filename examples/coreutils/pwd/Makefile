


pwd.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/pwd
	cp ../coreutils_source/coreutils/src/pwd .
	get-bc pwd


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/pwd:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc pwd slash *_slashed *log
