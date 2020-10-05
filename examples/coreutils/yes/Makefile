


yes.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/yes
	cp ../coreutils_source/coreutils/src/yes .
	get-bc yes


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/yes:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc yes slash *_slashed *log
