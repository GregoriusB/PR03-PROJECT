// SORRY GUYS, I HAVEN'T FINISHED THE CODE YET

#include "ScoreSystem.h"

#include <string>

using namespace std;
#include <iostream>

// point reward system
int ScoreSystem::PointSystem(int NumLives, string GuessedLetters) {
  // give points based on the difficulty
  if (difficulty == "Easy") {
    if (NumLives == 0) {
      cout << "Points:" << NumPoints << endl;
    }
    if (NumLives < 6 && NumLives != 0) {
      NumPoints = GuessedLetters.length() + 5;
      cout << "5 Bonus Points Awared! Congratulations!" << endl;
      cout << "Points:" << NumPoints << endl;
    }
  }
  if (difficulty == "Hard") {
    if (NumLives == 0) {
      cout << "Points:" << NumPoints << endl;
    }
    if (NumLives < 6 && NumLives != 0) {
      NumPoints = GuessedLetters.length() + 10;
      cout << "10 Bonus Points Awared! Congratulations!" << endl;
      cout << "Points:" << NumPoints << endl;
    }
  }
  return NumPoints;
}

// hints exchange system
void ScoreSystem::HintExchange(int NumPoints, int HintToken) {
  if (NumPoints < 8) {  // check if the user has enough point or not
    HintToken = 0;
  } else {  // if points are enough, user will get a hint token to exchange with
            // hints
    NumPoints -= 8;
    HintToken++;
  }
}
// exchange hints token for hints
void ScoreSystem::getHints(int HintToken, char letter) {
  if (HintToken = 0) {
    cout << "Hints are not available" << endl;
  } else {
    HintToken -= 1;  // take 1 from the token
    // UserGuess
  }
}
