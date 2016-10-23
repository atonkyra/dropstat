all:
	gcc dropstat.c -o dropstat.so -fPIC -shared -ldl -D_GNU_SOURCE
