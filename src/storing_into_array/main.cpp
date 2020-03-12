#include <iostream>
#include "game_entry.h"
#include "scores.h"

int main() {
  Scores* scores = new Scores();
  GameEntry* a = new GameEntry("Sammy", 1502);
  GameEntry* b = new GameEntry("Alice", 1200);
  GameEntry* c = new GameEntry("Sam", 900);

  scores -> add(*a);
  scores -> add(*b);
  scores -> add(*c);

  scores -> println();

  return EXIT_SUCCESS;
}
