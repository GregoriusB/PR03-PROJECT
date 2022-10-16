#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>
using namespace std;
#include "Game.h"
#include "Singleplayer.h"

class ScoreSystem : public Singleplayer, public Game {
 private:
  string unknownWord;
  string hints;
  
 protected:
  int NumPoints = 0;
  int HintToken = 0;

 public:
  int pointSystem(int NumLives, string Word);
  string getHints();
  void hintExchange(int NumPoints, int HintToken);
  void revealHints();
};

#endif  // SCORESYSTEM_H