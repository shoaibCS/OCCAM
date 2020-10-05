


echo.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/echo
	cp ../coreutils_source/coreutils/src/echo .
	get-bc echo


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/echo:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc echo slash *_slashed *log
