main.out: Date.o main.o
	g++ -Wall -g -o main.out Date.o main.o

main.o: main.cpp Date.h
	g++ -Wall -g -c main.cpp

Date.o: Date.cpp Date.h
	g++ -Wall -g -c Date.cpp

clean:
	rm -f main.out main.o Date.out
