


chgrp.bc: ../coreutils_source/ ../coreutils_source/coreutils/src/chgrp
	cp ../coreutils_source/coreutils/src/chgrp .
	get-bc chgrp


../coreutils_source/:
	make -C ../

../coreutils_source/coreutils/src/chgrp:
	make -C ../coreutils_source/coreutils/ -j4

clean:
	rm -rf *.bc chgrp slash *_slashed *log
