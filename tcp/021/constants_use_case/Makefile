main.out: constants.o main.o
	g++ -I ./ -o main.out main.o constants.o

main.o: main.cpp constants.h
	g++ -Wall -c main.cpp

constants.o: constants.cpp constants.h
	g++ -Wall -c constants.cpp

clean:
	rm -f *.o
