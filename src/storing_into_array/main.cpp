#include <iostream>
#include "game_entry.h"
#include "scores.h"

int main() {
  Scores* scores = new Scores();
  GameEntry* a = new GameEntry("Alice", 1202);
  GameEntry* b = new GameEntry("Bob", 1501);
  GameEntry* c = new GameEntry("Carla", 900);

  scores -> add(*a);
  scores -> add(*b);
  scores -> add(*c);

  scores -> println();

  scores -> remove(1);

  std::cout << "After removal" << std::endl;

  scores -> println();

  scores -> remove(0);

  scores -> println();

  return EXIT_SUCCESS;
}
