


nohup.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/nohup
	cp ../coreutils_source/coreutils/src/nohup .
	get-bc nohup


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/nohup:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc nohup slash *_slashed *log
