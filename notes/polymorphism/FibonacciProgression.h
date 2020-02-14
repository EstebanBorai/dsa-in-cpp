#ifndef FIBONACCI_PROGRESSION_H;
#define FIBONACCI_PROGRESSION_H;

#include <vector>
#include "Progression.h"

class FibonacciProgression : public Progression {
  public:
    FibonacciProgression(long i = 1);
    long next();
    void print();

  protected:
    virtual long nextValue();

  private:
    long last;
    long before;
    long current;
    std::vector<long> history;
};

#endif
