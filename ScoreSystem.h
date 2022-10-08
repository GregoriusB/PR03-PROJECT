#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>
using namespace std;

class ScoreSystem {
 private:

 public:
  int PointSystem(int Num_Guesses, string Word);
  int NumPoints = 0;
};

#endif
