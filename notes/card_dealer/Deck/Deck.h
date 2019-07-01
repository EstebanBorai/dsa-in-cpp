#pragma once

#include "Card.h"

class Deck
{
	private:
		Card cards[53];

	public:
		Deck::Deck();
		Card Deck::Shuffle();
};
