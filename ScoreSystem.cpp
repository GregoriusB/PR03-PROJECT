
#include "ScoreSystem.h"

#include <string>
using namespace std;
#include <iostream>

// point reward system
int ScoreSystem::PointSystem(int Num_Guesses, string GuessedLetters) {
  if (Num_Guesses == 6) {
    NumPoints += GuessedLetters.length();
  } else {
    if (GuessedLetters.length() < 5) {
      NumPoints += 5;
      cout << "5 Points Awared! Congratulations!" << endl;
    } else {
      NumPoints += 10;
      cout << "10 Points Awared! Congratulations!" << endl;
    }
  }
  return NumPoints;
}

void ScoreSystem::HintExchange(char NotGuessed) {
  char x = NotGuessed[rand() % 26];
  // check the word from the NotGuessed guess
  for (int i = 0; i < not_guessed.length(); i++) {
    if (theWord[i] == toupper(NotGuessed) ||
        theWord[i] == tolower(NotGuessed)) {
      guessedRight = true;
void ScoreSystem::HintExchange(char NotGuessed) {
  char x = NotGuessed(rand() % 26];
  // check the word from the NotGuessed guess
  for (int i = 0; i < not_guessed.length(); i++) {
    if (Word[i] == toupper(NotGuessed) || Word[i] == tolower(NotGuessed)) {
      guessedRight = true;

      if (i == 0)
      // If it's the first letter, it should be uppercase
      {
        revealed.push_back(NotGuessed);
        NotGuessed[i] = toupper(NotGuessed);
      } else {
        revealed.push_back(NotGuessed);
        NotGuessed[i] = tolower(NotGuessed);
      }
    }

    void Game::revealRandomly() {
      srand(time(NULL));
      int ran = rand() % NotGuessed.length();
      revealLetter(theWord[ran]);
    }
    if (i == 0)
    // If it's the first letter, it should be uppercase
    {
    revealed.push_back(NotGuessed);
    NotGuessed[i] = toupper(NotGuessed);
    } else {
    revealed.push_back(NotGuessed);
    NotGuessed[i] = tolower(NotGuessed);
  }
}