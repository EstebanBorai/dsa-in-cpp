#ifndef FLOWER_H
#define FLOWER_H

#include <string>

class Flower {
  public:
    Flower(const std::string& name, int pedals, double price);

    std::string getName() const { return name; }
    int getPedals() const { return pedals; }
    double getPrice() const { return price; }

    void setName(std::string name) { Flower::name = name; }
    void setPedals(int pedals) { Flower::pedals = pedals; }
    void setPrice(double price) { Flower::price = price; }

  private:
    std::string name;
    int pedals;
    double price;
};

#endif
