main.out: Employee.o main.o
	g++ -Wall -g -o main.out Employee.o main.o

main.o: main.cpp Employee.h
	g++ -Wall -g -c main.cpp

Employee.o: Employee.cpp Employee.h
	g++ -Wall -g -c Employee.cpp

clean:
	rm -f main.out main.o Employee.out
