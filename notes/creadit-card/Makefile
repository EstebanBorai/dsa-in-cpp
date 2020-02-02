main.out: CreditCard.o main.o
	g++ -Wall -g -o main.out CreditCard.o main.o

main.o: main.cpp CreditCard.h
	g++ -Wall -g -c main.cpp

CreditCard.o: CreditCard.cpp CreditCard.h
	g++ -Wall -g -c CreditCard.cpp

clean:
	rm -f main.out main.o CreditCard.o
