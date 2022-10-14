#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>
using namespace std;
#include "Game.h"
#include "Singleplayer.h"

class ScoreSystem : public Singleplayer, public Game {
 private:
  string unknownWord;
  string Word;

 protected:
  int NumPoints = 0;
  int HintToken = 0;

 public:
  int PointSystem(int Num_Guesses, string Word);
  void getHints(int HintToken , char letter);
  void HintExchange(int NumPoints,int HintToken);
};

#endif //SCORESYSTEM_H