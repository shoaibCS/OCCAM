


pr.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/pr
	cp ../coreutils_source/coreutils/src/pr .
	get-bc pr


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/pr:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc pr slash *_slashed *log
