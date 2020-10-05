


nproc.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/nproc
	cp ../coreutils_source/coreutils/src/nproc .
	get-bc nproc


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/nproc:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc nproc slash *_slashed *log
