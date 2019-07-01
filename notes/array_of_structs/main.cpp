#include <iostream>

#define log(x) std::cout << x << std::endl;

enum Suit {
	Hearts = 1,
	Stars = 2,
	Clubs = 3,
	Diamonds = 4,
};

struct Card {
	Suit suit;
	std::string value;
};

void paintCard(Suit suit, std::string value, Card *card) {
	log(value);

	card -> suit = suit;
	card -> value = value;
}

void initalizeDeck(Card* deck) {
	const std::string cardValues[15] = {
		"A",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9",
		"10",
		"11",
		"12",
		"J",
		"Q",
		"K",
	};

	for (int i = 0; i < 52; i++) {
		Card current = deck[i];

		if (i < 15) {
			paintCard(Hearts, cardValues[i], &current);
		}

		if (i >= 15 && i < 30) {
			paintCard(Stars, cardValues[i - 15], &current);
		}

		if (i >= 30 && i < 45) {
			paintCard(Clubs, cardValues[i - 30], &current);
		}

		if (i >= 45 && i < 60) {
			paintCard(Diamonds, cardValues[i - 45], &current);
		}
	}
}

int main() {
	Card *deck = new Card[52];

	initalizeDeck(deck);

	for (int i = 0; i < 52; i++) {
		std::cout << deck[i].suit << " " << deck[i].value << std::endl;
	}

	delete[] deck;
}