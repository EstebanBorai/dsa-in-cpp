#include <iostream>
#include "Progression.h"
#include "ArithProgression.h"
#include "GeomProgression.h"
#include "FibonacciProgression.h"

int main() {
  Progression* prog;

  std::cout << "Arithmetic Progression with default increment: " << std::endl;
  prog = new ArithProgression();
  prog -> printProgression(10);

  std::cout << "Arithmetic Progression with increment 5:" << std::endl;
  prog = new ArithProgression(5);
  prog -> printProgression(10);

  std::cout << "Geometric progression with default base:" << std::endl;
  prog = new GeomProgression();
  prog -> printProgression(10);

  std::cout << "Geometric progression with base 3:" << std::endl;
  prog = new GeomProgression(3);
  prog -> printProgression(10);

  std::cout << "Fibonacci progression with default start values:" << std::endl;
  prog = new FibonacciProgession();
  prog -> printProgression(10);

  std::cout << "Fibonacci progression with start values 4 and 6:" << std::endl;
  prog = new FibonacciProgession(4, 6);
  prog -> printProgression(10);

  return EXIT_SUCCESS;
}
