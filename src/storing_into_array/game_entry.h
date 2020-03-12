#ifndef GAME_ENTRY_H
#define GAME_ENTRY_H
#include <string>

class GameEntry {
	private:
		std::string name;
		int score;

	public:
		GameEntry(const std::string& name = "", int score = 0);

		std::string get_name() const;

		int get_score() const;
};

#endif
