#ifndef SAVESYSTEM_H
#define SAVESYSTEM_H
#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SaveSystem {
 private:
 public:
  bool checkProgress();
  int getScore();
  void saveProgress();
};

#endif