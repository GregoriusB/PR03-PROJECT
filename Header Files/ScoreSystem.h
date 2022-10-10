#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>
using namespace std;

class ScoreSystem {
 private:
  int NumPoints = 0;
  string Word;

 public:
  int PointSystem(int Num_Guesses, string Word);
  void getHints(char letter);
  void wordUnreveal(string Word);
  void revealRandom();
};

#endif