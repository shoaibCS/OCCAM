


nl.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/nl
	cp ../coreutils_source/coreutils/src/nl .
	get-bc nl


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/nl:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc nl slash *_slashed *log
