#include <iostream>
#include "fibonacci_progression.h"

FibonacciProgression::FibonacciProgression(long f, long s) :
	Progression(f), second(s), prev(second - first) {};

long FibonacciProgression::first_value() {
	cur = first;
	prev = second - first;

	return cur;
}

long FibonacciProgression::next_value() {
	long tmp = prev;
	prev = cur;
	cur += tmp;

	return cur;
}
