#ifndef SINGLEPLAYERHARD_H
#define SINGLEPLAYERHARD_H

#include <fstream>
#include <string>
#include <vector>

#include "../Header Files/Game.h"
#include "../Header Files/Singleplayer.h"
using namespace std;

class SinglePlayerHard : public Singleplayer {
 public:
  // function for the cpp files
  string setWord();
};

#endif  // SINGLEPLAYEREHARD_H