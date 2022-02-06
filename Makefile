opencalc:
	mkdir bin/
	gcc opencalc.c -o opencalc
	mv opencalc bin/

install:
	cp bin/opencalc /usr/bin

clean:
	rm -r bin/

uninstall:
	rm -r /usr/bin/opencalc
