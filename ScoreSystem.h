#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include <string>
using namespace std;

class ScoreSystem {
 private:
  string unknownWord;
  string Word;

 protected:
  int NumPoints = 0;

 public:
  int PointSystem(int Num_Guesses, string Word);
  void getHints(char letter);
  void HintExchange(char not_guessed);
};

#endif