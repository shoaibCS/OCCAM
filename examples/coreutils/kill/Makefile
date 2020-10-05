


kill.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/kill
	cp ../coreutils_source/coreutils/src/kill .
	get-bc kill


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/kill:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc kill slash *_slashed *log
