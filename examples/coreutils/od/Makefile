


od.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/od
	cp ../coreutils_source/coreutils/src/od .
	get-bc od


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/od:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc od slash *_slashed *log
