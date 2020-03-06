#include <iostream>
#include "student.h"

void Student::print() {
	std::cout << "Name:\t" << Person::get_name() << std::endl;
	std::cout << "ID:\t" << Person::get_id_num() << std::endl;

	if (major != "") {
		std::cout << "Major:\t" << major << std::endl;
	} else {
		std::cout << "Major:\t(no major)" << std::endl;
	}
}
