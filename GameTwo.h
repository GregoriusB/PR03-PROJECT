#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class GameTwo {
 private:

 protected:
  int playerScore = 0;

 public:
  GameTwo() = default;
  void clear();
  void loadProgress();
  int getScore();
  void saveProgress();
};
