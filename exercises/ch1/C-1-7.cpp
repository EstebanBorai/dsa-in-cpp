#include <iostream>
#include <string>
#include <vector>

typedef std::vector<std::string> StringVector;

void printStringVector(StringVector v) {
  int i = 0;

  for (i; i < v.size(); i++) {
    std::cout << v[i] << std::endl;
  }
}

std::string readline() {
  std::string str;

  std::cin >> str;

  return str;
}

std::string scan() {
  std::string lines;
  std::string current_line;

  while (std::getline(std::cin, current_line)) {
    lines += current_line += '\n';
    current_line = "";
  }

  return lines;
}

StringVector split(std::string str, char d) {
  int const CHAR_SIZE = 1;

  size_t pos = 0;
  std::string token;
  StringVector keys;

  while ((pos = str.find(d)) != std::string::npos) {
    token = str.substr(0, pos);
    keys.push_back(token);
    str.erase(0, pos + CHAR_SIZE);
  }

  // Push the last string to the vector
  keys.push_back(str);

  return keys;
}

std::string join(StringVector v, char d) {
  int i = 0;
  std::string j;

  for (i; i < v.size(); i++) {
    j += v[i] += d;
  }

  return j;
}

StringVector reverse(StringVector v) {
  int size = v.size();
  StringVector reversed;

  for (size; size > -1; size--) {
    reversed.push_back(v[size]);
  }

  return reversed;
}

int main() {
  int i = 0;
  char const DELIMITER = ' ';

  StringVector reversedLines;
  StringVector lines = split(scan(), '\n');

  for (i; i < lines.size(); i++) {
    StringVector line = split(lines[i], DELIMITER);
    StringVector reversed = reverse(line);
    
    reversedLines.push_back(join(reversed, DELIMITER));
  }

  printStringVector(reversedLines);

  return 0;
}
