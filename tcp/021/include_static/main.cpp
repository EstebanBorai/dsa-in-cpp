#include <iostream>
#include "static.h"

// ./static.h:1:12: note: previous definition is here
// static int s_Variable = 5;

// int s_Variable = 10;

// uses static s_Variable included in "static.h"
extern int s_Variable;

int main()
{
	std::cout << s_Variable << std::endl;
	std::cin.get();
}
