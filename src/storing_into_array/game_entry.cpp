#include "game_entry.h"
#include <string>

GameEntry::GameEntry(const std::string& name, int score)
  : name(name), score(score) {};

std::string GameEntry::get_name() const {
  return this -> name;
}

int GameEntry::get_score() const {
  return this -> score;
}
