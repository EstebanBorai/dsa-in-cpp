main.out: Account.o main.o
	g++ -Wall -g -o main.out Account.o main.o

main.o: main.cpp Account.h
	g++ -Wall -g -c main.cpp

Account.o: Account.cpp Account.h
	g++ -Wall -g -c Account.cpp

clean:
	rm -f main.out main.o Account.o
