opencalc:
	mkdir bin/
	mkdir sh/
	gcc opencalc.c -o opencalc
	mv opencalc bin/
	shc -f opencalc.sh -o opencalc
	mv opencalc sh/

install:
	mkdir /opt/opencalc
	cp -r README COPYING opencalc.c opencalc.sh.x.c bin/ /opt/opencalc
	cp -r sh/opencalc /usr/local/bin
	install -g 0 -o 0 -m 0644 man/opencalc.7.gz /usr/local/man/man7/

clean:
	rm -r bin/
	rm -r sh/
	rm -r opencalc.sh.x.c

uninstall:
	rm -r /usr/local/bin/opencalc
	rm -r /opt/opencalc
	rm -r /usr/local/man/man7/opencalc.7.gz
