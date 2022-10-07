#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>
using namespace std;

class ScoreSystem {
 private:
  int NumPoints = 0;

 public:
  int PointSystem(int Num_Guesses, string Word);
};

#endif
