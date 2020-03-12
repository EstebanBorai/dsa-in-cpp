#include <iostream>
#include "game_entry.h"
#include "scores.h"

int main() {
  Scores* scores = new Scores();
  GameEntry* a = new GameEntry("Alice", 1502);
  GameEntry* b = new GameEntry("Bob", 1200);
  GameEntry* c = new GameEntry("Carla", 900);

  scores -> add(*a);
  scores -> add(*b);
  scores -> add(*c);

  scores -> println();

  scores -> remove(0);

  std::cout << "After removal" << std::endl;

  scores -> println();

  scores -> remove(0);

  scores -> println();

  return EXIT_SUCCESS;
}
