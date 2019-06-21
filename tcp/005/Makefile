main.out: Log.o main.o
	g++ -Wall -g -o main.out Log.o main.o

main.o: main.cpp
	g++ -Wall -g -c main.cpp

Log.o: Log.cpp
	g++ -Wall -g -c Log.cpp

clean:
	rm -f main.out main.o Account.o
