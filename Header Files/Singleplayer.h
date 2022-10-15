#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include <fstream>
#include <string>
#include <vector>

#include "../Header Files/Game.h"
using namespace std;

class Singleplayer : public Game {
 protected:
  string difficulty;
  int flag3 = 0;
  string WordCategory;
  string Word;

 public:
  // function for the cpp files
  string getDifficulty();
};

#endif  // SINGLEPLAYER_H