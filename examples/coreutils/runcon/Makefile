


runcon.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/runcon
	cp ../coreutils_source/coreutils/src/runcon .
	get-bc runcon


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/runcon:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc runcon slash *_slashed *log
