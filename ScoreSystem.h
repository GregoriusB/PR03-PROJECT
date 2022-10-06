#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H
#include <string>

using namespace std;
// define the class ScoreSystem
class ScoreSystem {
 public:
  bool checkWord();
  int getPoints();
  void displayPoints();
  // string getHints();

 protected:
  int points;
  bool check = true;
};

#endif  // SCORESYSTEM_H
