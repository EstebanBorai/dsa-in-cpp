#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "person.h"

class Student : public Person {
	private:
		std::string major;
		int grad_year;

	public:
		Student(std::string& name, std::string& num_id, std::string& major) : 
			Person(name, num_id), major(major) {};

		void print();
		void change_major(const std::string& new_major) {
			major = new_major;
		}

		int get_grad_year() {
			return grad_year;
		}
};

#endif
