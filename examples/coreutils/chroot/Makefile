


chroot.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/chroot
	cp ../coreutils_source/coreutils/src/chroot .
	get-bc chroot


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/chroot:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc chroot slash *_slashed *log
