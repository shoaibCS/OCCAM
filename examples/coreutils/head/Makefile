


head.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/head
	cp ../coreutils_source/coreutils/src/head .
	get-bc head


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/head:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc head slash *_slashed *log
