#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H
#include <string>

#include "Mode.h"

using namespace std;
// define the class ScoreSystem
class ScoreSystem {
 public:
  bool checkWord(Mode word);
  int getPoints();
  void displayPoints();
  void getHints();
  string *hintsArray = new string[secretWord.length()];

 protected:
  int points = 0;
  int pointHints;
  bool check;
  int length;
};

#endif  // SCORESYSTEM_H
