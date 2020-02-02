main.out: Flower.o main.o
	g++ -Wall -g -o main.out Flower.o main.o

main.o: main.cpp Flower.h
	g++ -Wall -g -c main.cpp

Flower.o: Flower.cpp Flower.h
	g++ -Wall -g -c Flower.cpp

clean:
	rm -f main.out main.o Flower.o
