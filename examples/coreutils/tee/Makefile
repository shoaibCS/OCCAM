


tee.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/tee
	cp ../coreutils_source/coreutils/src/tee .
	get-bc tee


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/tee:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc tee slash *_slashed *log
