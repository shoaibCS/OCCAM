


pathchk.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/pathchk
	cp ../coreutils_source/coreutils/src/pathchk .
	get-bc pathchk


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/pathchk:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc pathchk slash *_slashed *log
