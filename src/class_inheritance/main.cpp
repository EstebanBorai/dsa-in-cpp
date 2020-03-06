#include <string>
#include "person.h"
#include "student.h"

int main() {
	std::string name = "Esteban";
	std::string id = "0-1002-292983";

	Person* p = new Person(name, id);

	p -> print();

	delete p;

	std::string major = "";

	Student* s = new Student(name, id, major);

	s -> print();

	return 0;
}
