


fmt.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/fmt
	cp ../coreutils_source/coreutils/src/fmt .
	get-bc fmt


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/fmt:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc fmt slash *_slashed *log
