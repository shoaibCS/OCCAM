


uniq.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/uniq
	cp ../coreutils_source/coreutils/src/uniq .
	get-bc uniq


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/uniq:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc uniq slash *_slashed *log
