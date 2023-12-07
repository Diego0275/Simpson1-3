all: bin/main

bin/main : src/main.cpp include/*
	g++ -c src/main.cpp -o temp/main.o -Iinclude
	gcc -c src/tinyexpr.c -o temp/tinyexpr.o -Iinclude
	g++ temp/main.o temp/tinyexpr.o -o $@

run : bin/main
	./$<