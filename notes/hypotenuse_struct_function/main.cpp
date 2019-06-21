#include <iostream>
#include <math.h>

using namespace std;

struct Triangle {
	double sideA;
	double sideB;
	double hypo;
};

void printTriangle(struct Triangle &t) {
	cout << "Side A:\t" << t.sideA << endl;
	cout << "Side B:\t" << t.sideB << endl;
	cout << "Hypotenuse:\t" << t.hypo << endl;
}

void hypotenuse(struct Triangle &t) {
	double alpha, beta;
	char update;

	alpha = t.sideA;
	beta = t.sideB;

	const double HYPO = sqrt(pow(alpha, 2) + pow(beta, 2));

	if (t.hypo != HYPO) {
		cout << "Wrong hypotenuse value for triangle with sides " << alpha << ", and " << beta << endl;
		cout << "Hypotenuse is: " << HYPO << endl;

		cout << "Do you want to update triangle hypotenuse value? (y/n): " << endl;
		cin >> update;

		if (update == 'y' || update == 'Y' || update == 'n' || update == 'N') {
			if (update == 'y' || update == 'Y') {
				t.hypo = HYPO;
			}
		} else {
			cout << "Wrong answer " << update << ". Hypotenuse remains as " << t.hypo << endl;
		}
	}
}

int main() {
	struct Triangle t;

	t.sideA = 10;
	t.sideB = 12;
	t.hypo = 15.62;

	cout << "Before: " << endl;
	printTriangle(t);

	hypotenuse(t);

	cout << "After: " << endl;
	printTriangle(t);
}