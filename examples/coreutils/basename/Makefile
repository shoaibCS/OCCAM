


basename.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/basename
	cp ../coreutils_source/coreutils/src/basename .
	get-bc basename


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/basename:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc basename slash *_slashed *log
