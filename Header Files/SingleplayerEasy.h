#ifndef SINGLEPLAYEREASY_H
#define SINGLEPLAYEREASY_H

#include <fstream>
#include <string>
#include <vector>

#include "../Header Files/Singleplayer.h"
using namespace std;

class SinglePlayerEasy : public Singleplayer {
 protected:
  string AussieEasy[7] = {"bloke",   "mate",    "mozzie", "kangaroo",
                          "crickey", "sunnies", "koala"};
  string NatureEasy[7] = {"cave",    "environment", "meadow", "rainforest",
                          "volcano", "desert",      "valley"};
  string SpaceEasy[7] = {"martian", "jupiter",       "mercury", "interstellar",
                         "solar",   "intergalactic", "wormhole"};
  string SportEasy[7] = {"soccer",     "fitness", "skiing",  "coaching",
                         "gymnastics", "esports", "baseball"};

 public:
  // function for the cpp files
  string setWord();
};

#endif  // SINGLEPLAYEREASY_H