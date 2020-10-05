


hostid.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/hostid
	cp ../coreutils_source/coreutils/src/hostid .
	get-bc hostid


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/hostid:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc hostid slash *_slashed *log
