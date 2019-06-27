#include <iostream>

#define println(x) std::cout << x << std::endl;

struct Person {
	std::string firstName;
	std::string lastName;
	int age;
	std::string skills[5];
};

void mapSkills(Person &p, std::string skills[5]) {
	for (int i = 0; i < 5; i++) {
		p.skills[i] = skills[i];
	}
}

struct Person createPerson(std::string firstName, std::string lastName, int age, std::string skills[5]) {
	struct Person p;

	p.firstName = firstName;
	p.lastName = lastName;
	p.age = age;
	
	mapSkills(p, skills);

	return p;
};

void printSkills(Person &p) {
	println("Skills");

	for (int i = 0; i < 5; i++) {
		if (p.skills[i] != "") {
			println(p.skills[i]);
		} else {
			break;
		}
	}
}

void printPerson(Person &p) {
	println(p.firstName);
	println(p.lastName);
	println(p.age);
	printSkills(p);
}

void addSkill(Person &p, std::string skill) {
	for (int i = 0; i < 5; i++) {
		if (p.skills[i] == "") {
			p.skills[i] = skill;
			break;
		}
	}
}

int main() {
	std::string skills[] = {"", "Dos", "", "", ""};
	struct Person p = createPerson("John", "Appleseed", 28, skills);

	struct Person* a = new struct Person;
	println(a); // memory hash
	println(sizeof a); // 8
	a -> age = 20;
	println(a -> age); // 20

	printPerson(*a); // same as 72

	struct Person& r = *a;

	printPerson(r); // same as 68

	// delete &a;

	printPerson(*a);
}