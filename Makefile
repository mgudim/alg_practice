.PHONY: build
build:
	cd src; $(MAKE);
	cd test; $(MAKE);

.PHONY: clean

clean:
	rm -r build
