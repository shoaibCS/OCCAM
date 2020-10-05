


ginstall.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/ginstall
	cp ../coreutils_source/coreutils/src/ginstall .
	get-bc ginstall


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/ginstall:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc ginstall slash *_slashed *log
