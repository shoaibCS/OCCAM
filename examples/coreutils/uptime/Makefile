


uptime.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/uptime
	cp ../coreutils_source/coreutils/src/uptime .
	get-bc uptime


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/uptime:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc uptime slash *_slashed *log
