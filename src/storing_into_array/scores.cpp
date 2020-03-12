#include <iostream>
#include "scores.h"
#include "game_entry.h"
#include "empty_slot_exception.h"

Scores::~Scores() {
  delete[] this -> entries;
};

void Scores::add(const GameEntry& e) {
  int new_score = e.get_score();

  if (this -> num_entries == this -> max_entries) {
    if (new_score <= this -> entries[this -> max_entries - 1].get_score()) {
      return;
    }
  } else {
    this -> num_entries++;

    int it = this -> num_entries - 2;

    while (it >= 0 && new_score > this -> entries[it].get_score()) {
      this -> entries[it + 1] = this -> entries[it];
      it--;
    }

    this -> entries[it + 1] = e;
  }
}

GameEntry Scores::remove(int i) {
  if ((i < 0) || (i > this -> num_entries)) {
    throw EmptySlotException(i);
  }

  GameEntry e = this -> entries[i];

  for (int j = i + 1; j < this -> num_entries; j++) {
    this -> entries[j - 1] = this -> entries[j];
  }

  this -> num_entries--;
  return e;
}

void Scores::println() {
  for (int i = 0; i < this -> max_entries; i++) {
    std::string name_placeholder;

    if (this -> entries[i].get_name() == "") {
      name_placeholder = "-";
    } else {
      name_placeholder = this -> entries[i].get_name();
    }
    
    std::cout << i + 1 << ".\t"
      << name_placeholder
      << "\tScore:  " << this -> entries[i].get_score()
      << std::endl;
  }
}
