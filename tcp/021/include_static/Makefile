main.out: main.o static.o
	g++ -Wall -g -o main.out static.o main.o

main.o: main.cpp static.h
	g++ -Wall -g -c main.cpp

static.o: static.cpp static.h
	g++ -Wall -g -c static.cpp

clean:
	rm static.o main.o
