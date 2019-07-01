#include <iostream>
#include "Card.h"

enum Suit {
	Club = 1
};

struct Card {
	Suit suit;
	int value;
};
