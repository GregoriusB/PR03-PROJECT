#ifndef SINGLEPLAYERHARD_H
#define SINGLEPLAYERHARD_H

#include <fstream>
#include <string>
#include <vector>

#include "../Header Files/Game.h"
#include "../Header Files/Singleplayer.h"
using namespace std;

class SinglePlayerHard : public Singleplayer {
 protected:
  string AussieHard[7] = {"brekkie", "bathers", "heaps",  "battler",
                          "servo",   "yakka",   "outback"};
  string NatureHard[7] = {"photosynthesis", "pangaea", "stalacites",
                          "archipelago",    "glacier", "biosphere",
                          "continent"};
  string SpaceHard[7] = {"nucleosynthesis", "andromeda", "geoheliocentrism",
                         "heliosphere",     "titan",     "centauri",
                         "extraterrestrial"};
  string SportHard[7] = {"triathlons",  "lacrosse", "motocross", "paddlesport",
                         "racquetball", "sledding", "boxing"};

 public:
  // function for the cpp files
  string setWord();
};

#endif  // SINGLEPLAYEREHARD_H