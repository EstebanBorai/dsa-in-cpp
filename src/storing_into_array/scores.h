#ifndef SCORES_H
#define SCORES_H
#include "game_entry.h"

class Scores {
  private:
    int max_entries;
    int num_entries;
    GameEntry* entries;
  
  public:
    Scores(int max_entries = 10) :
      max_entries(max_entries),
      num_entries(0),
      entries(new GameEntry[max_entries]) {};

    ~Scores();
    void add(const GameEntry& e);
    GameEntry remove(int i);
    void println();
};

#endif
