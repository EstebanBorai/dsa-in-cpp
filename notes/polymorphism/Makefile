main.out: FibonacciProgression.o main.o
	g++ -Wall -g -o main.out FibonacciProgression.o main.o

main.o: main.cpp FibonacciProgression.h
	g++ -Wall -g -c main.cpp

FibonacciProgression.o: Progression.o FibonacciProgression.cpp FibonacciProgression.h
	g++ -Wall -g -c FibonacciProgression.cpp

Progression.o: Progression.cpp Progression.h
	g++ -Wall -g -c Progression.cpp

clean:
	rm -f main.out main.o FibonacciProgression.o Progression.o
