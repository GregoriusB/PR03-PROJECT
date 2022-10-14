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
  string line;
  vector<string> lines;
  int total_lines = 0;
  int random_number;
  string Word;

 public:
  // function for the cpp files
  string getDifficulty();
  string setWord();
};

#endif  // SINGLEPLAYER_H