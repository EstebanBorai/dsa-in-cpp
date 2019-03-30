main.out: Invoice.o main.o
	g++ -Wall -g -o main.out Invoice.o main.o

main.o: main.cpp Invoice.h
	g++ -Wall -g -c main.cpp

Invoice.o: Invoice.cpp Invoice.h
	g++ -Wall -g -c Invoice.cpp

clean:
	rm -f main.out main.o Invoice.o
