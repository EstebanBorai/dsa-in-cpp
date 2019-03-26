main.out: GradeBook.o main.o
	g++ -Wall -g -o main.out GradeBook.o main.o

main.o: main.cpp GradeBook.h
	g++ -Wall -g -c main.cpp

GradeBook.o: GradeBook.cpp GradeBook.h
	g++ -Wall -g -c GradeBook.cpp

clean:
	rm -f main.out main.o GradeBook.o
	