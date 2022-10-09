#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>
using namespace std;

class ScoreSystem {
 public:
  int NumPoints = 0;
  int PointSystem(int Num_Guesses, string Word);

  int HintExchange(int Not_Guessed);
};

#endif
