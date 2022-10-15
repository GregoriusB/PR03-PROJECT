#ifndef SAVE_H
#define SAVE_H
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Save {
 private:
 int playerPoints;
 string slotName;

 public:
  Save() = default;
  string getName();
  int getScore();
  void setName(string name);
  void setScore(int score);
};

#endif