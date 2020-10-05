


expr.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/expr
	cp ../coreutils_source/coreutils/src/expr .
	get-bc expr


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/expr:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc expr slash *_slashed *log
