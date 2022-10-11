#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>

#include "GameCode.h"
using namespace std;

class ScoreSystem : public GuessWord {
 public:
  int NumPoints = 0;
  int PointSystem(int Num_Guesses, string Word);
};

#endif
