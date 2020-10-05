


chcon.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/chcon
	cp ../coreutils_source/coreutils/src/chcon .
	get-bc chcon


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/chcon:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc chcon slash *_slashed *log
