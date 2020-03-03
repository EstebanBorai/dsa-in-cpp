#include <iostream>
#include <string>
#include "progression.h"
#include "arith_progression.h"
#include "geom_progression.h"
#include "fibonacci_progression.h"

void println(std::string message) {
	std::cout << message << std::endl;
}

int main() {
	Progression* prog;

	println("Arithmetic Progression with default increment: ");
	prog = new ArithProgression();
	prog -> print_progression(10);

	println("Arithmetic Progression with increment 5: ");
	prog = new ArithProgression(5);
	prog -> print_progression(10);

	println("Geometric Progression with default base: ");
	prog = new GeomProgression();
	prog -> print_progression(10);

	println("Geometric Progrssion with base 3: ");
	prog = new GeomProgression(3);
	prog -> print_progression(10);

	println("Fibonacci Progression with default start values: ");
	prog = new FibonacciProgression();
	prog -> print_progression(10);

	println("Fibonacci Progression with start values 4 and 6: ");
	prog = new FibonacciProgression(4, 6);
	prog -> print_progression(10);

	delete prog;

	return EXIT_SUCCESS;
}
