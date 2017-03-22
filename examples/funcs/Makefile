subdirs = $(dir $(wildcard ./*/))
examples = $(filter-out ./, $(subdirs))

clean:
	@for dir in ${examples} ; do \
		$(MAKE) -C $$dir clean;\
	done
