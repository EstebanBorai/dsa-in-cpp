#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
	private:
		std::string name;
		std::string id_num;

	public:
		Person(std::string& name, std::string& id_num) : name(name), id_num(id_num) {};
		void print();

		std::string get_name() {
			return name;
		};

		std::string get_id_num() {
			return id_num;
		}
};

#endif
