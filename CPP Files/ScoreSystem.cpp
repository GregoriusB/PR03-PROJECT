
#include "ScoreSystem.h"

#include <string>

using namespace std;
#include <iostream>

// point reward system
int ScoreSystem::PointSystem(int Num_Guesses, string GuessedLetters) {
  // give points based on the difficulty
  if (difficulty == "Easy") {
    if (NumLives < 6) {
      NumPoints = GuessedLetters.length() + 5;
      cout << "5 Bonus Points Awared! Congratulations!" << endl;
    }
  }
  if (difficulty == "Hard") {
    if (NumLives < 6) {
      NumPoints = GuessedLetters.length() + 10;
      cout << "10 Bonus Points Awared! Congratulations!" << endl;
    }
  }
  return NumPoints;
}

// hints exchange system



