#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include <fstream>
#include <string>
#include <vector>

#include "../Header Files/Game.h"
using namespace std;

class SinglePlayer : public Game {
 private:
  int flag3 = 0;
  string WordCategory;
  string line;
  vector<string> lines;
  int total_lines = 0;
  int random_number;

 protected:
  string Word;
  string difficulty;

 public:
  SinglePlayer(){};
  // function for the cpp files
  string setWord();
};

#endif  // SINGLEPLAYER_H