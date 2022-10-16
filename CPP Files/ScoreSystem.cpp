// SORRY GUYS, I HAVEN'T FINISHED THE CODE YET

#include "ScoreSystem.h"

#include <ctime>
#include <string>

using namespace std;
#include <iostream>

// point reward system
int ScoreSystem::pointSystem(int NumLives, string Word) {
  // give points based on the difficulty
  if (difficulty == "Easy") {
    if (NumLives == 0) {
      cout << "Points:" << NumPoints << endl;
    }
    if (NumLives < 6 && NumLives != 0) {
      NumPoints = Word.length() + 5;
      cout << "5 Bonus Points Awared! Congratulations!" << endl;
      cout << "Points:" << NumPoints << endl;
    }
  }
  if (difficulty == "Hard") {
    if (NumLives == 0) {
      cout << "Points:" << NumPoints << endl;
    }
    if (NumLives < 6 && NumLives != 0) {
      NumPoints = Word.length() + 10;
      cout << "10 Bonus Points Awared! Congratulations!" << endl;
      cout << "Points:" << NumPoints << endl;
    }
  }
  return NumPoints;
}

// hints exchange system
void ScoreSystem::hintExchange(int NumPoints, int HintToken) {
  if (NumPoints < 8) {  // check if the user has enough point or not
    HintToken = 0;
  } else {  // if points are enough, user will get a hint token to exchange with
            // hints
    NumPoints -= 8;
    HintToken++;
  }
}
// exchange hints token for hints
string ScoreSystem::getHints() {
  if (HintToken = 0) {
    cout << "Hints are not available!" << endl;
  } else {
    HintToken -= 1;  // take 1 from the token
    for (int i = 0; i < Word.length();
         i++) {  // check the word that is being guessed
    }

  }
  return hints;
}

void ScoreSystem::revealHints() {
  // reveal hints randomly
  srand(time(0));
  int random = rand() % Word.length();
  // reveal what letter used in the game
  cout << "Letters used in the puzzle is" << getHints(hints[random]) << endl;
}
