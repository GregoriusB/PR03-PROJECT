#ifndef SINGLEPLAYEREASY_H
#define SINGLEPLAYEREASY_H

#include <fstream>
#include <string>
#include <vector>

#include "../Header Files/Game.h"
#include "../Header Files/Singleplayer.h"
using namespace std;

class SinglePlayerEasy : public Singleplayer {
 public:
  // function for the cpp files
  string setWord();
};

#endif  // SINGLEPLAYEREASY_H