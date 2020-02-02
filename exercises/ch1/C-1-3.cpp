#include <iostream>
#include <vector>

int howMany(std::vector<int> v, int t) {
  int i = 0, total = 0;

  for (i; i < v.size() - 1; i++) {
    if (v[i] == t) {
      total++;
    }
  }

  return total;
}

int main() {
  int items[] = {1, 2, 3, 2, 5};
  std::vector<int> v (items, items + sizeof(items) / sizeof(int));

  int const totalEqual = howMany(v, 2);
  int const totalDiff = v.size() - totalEqual;

  std::cout << "Total Equal: " << totalEqual << std::endl;
  std::cout << "Total Diff: " << totalDiff << std::endl;
  std::cout << "Total Items: " << v.size() << std::endl;

  return 0;
}
