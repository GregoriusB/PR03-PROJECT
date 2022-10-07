#include "ScoreSystem.h"

#include <iostream>
#include <string>

#include "Mode.h"

// function to check if the guessed word is the correct answer
bool ScoreSystem::checkWord(Mode word) {
  // check the guessed word with the correct answer
  if (guess == secretWord) {
    check = true;
    return check;
  } else {
    check = false;
    return check;
  }
}

// function to gain points
int ScoreSystem::getPoints() {
  for (int i = 0; i < secretWord.length(); i++) {
    if (guess[i] == secretWord[i]) {  // if user guess the letter correctly,
                                      // reward with 1 points
      points = points + 1;
      // reward additional points if user guessed the word correctly within 3
      // tries
      if (check == true && tries <= 3) {
        points = points + 5;
      }
    }
  }
  return points;
}

// function to display user accumulated points
void ScoreSystem::displayPoints() {
  cout << "Current Points:" << points << endl;
}

// function to exchange points for hints
void ScoreSystem ::getHints() {
  cout << "Hints cost 8 points" << endl;
  if (points < 8) {
    cout << "You don't have enough points for a hint" << endl;
  } else {
    
  }
}