


truncate.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/truncate
	cp ../coreutils_source/coreutils/src/truncate .
	get-bc truncate


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/truncate:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc truncate slash *_slashed *log
