main.out: ArithProgression.o GeomProgression.o FibonacciProgression.o main.o
	g++ -Wall -g -o main.out ArithProgression.o GeomProgression.o FibonacciProgression.o main.o

main.o: main.cpp ArithProgression.o GeomProgression.o FibonacciProgression.h
	g++ -Wall -g -c main.cpp

FibonacciProgression.o: Progression.o FibonacciProgression.cpp FibonacciProgression.h
	g++ -Wall -g -c FibonacciProgression.cpp

GeomProgression.o: Progression.o GeomProgression.cpp GeomProgression.h
	g++ -Wall -g -c GeomProgression.cpp

ArithProgression.o: Progression.o ArithProgression.cpp ArithProgression.h
	g++ -Wall -g -c ArithProgression.cpp

Progression.o: Progression.cpp Progression.h
	g++ -Wall -g -c Progression.cpp

clean:
	rm -f main.out main.o ArithProgression.o GeomProgression.o FibonacciProgression.o Progression.o
