#include <string>
#include "GameEntry.h"

GameEntry::GameEntry(const std::string& n, int s)
	: name(n), score(s) {}; // Accessor Member Functions

std::string GameEntry::getName() const {
	return name;
}

int GameEntry::getScore() const {
	return score;
}
