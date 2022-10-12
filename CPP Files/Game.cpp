#include "../Header Files/Game.h"

#include <fstream>
#include <iostream>
#include <string>

#include "Guess.cpp"
using namespace std;

// Gets Player's score
int ::Game::getScore(int score) {
  playerScore = score;
  return playerScore;
}

// Saves to progress
void ::Game::saveProgress(int score) {
  ofstream save;
  save.open("/Users/kj/Documents/PR03-PROJECT/progress.txt");
  if (save.is_open()) {
    // store contents to text file
    save << score << "\n";
    save.close();
  } else {
    cout << "Problem with opening file";
  }
}

// Determines whether the player is ready to commence the game.
void Game::is_player_ready() {
  while (isPlayerReady != "Y") {
    cout << "Are your ready to commence the game (Y): ";
    cin >> isPlayerReady;
  }
}

// Number of Players
string Game::Number_of_Players() {
  while ((NumPlayers != "1") && (NumPlayers != "2")) {
    cout << "How many Players (1 or 2): ";
    cin >> NumPlayers;
  }
  return NumPlayers;
}
// Attain the guesses the user has guessed
Guess* Game::get_guesses() { return guesses; }

// Adds each object guess to the guess array
void Game::add_guess(Guess a_guess) {
  guesses[NumGuesses] = a_guess;
  NumGuesses++;
}
int Game::getNumberCorrect() { return j; }
// Defines and prints the unknown word
void Game::defineUnknownWord(string Word) {
  for (int i = 0; i < Word.length(); i++) {
    UnknownWord[i] = 95;
  }
}
void Game::PrintUnknownWord(string Word) {
  for (int i = 0; i < Word.length(); i++) {
    cout << UnknownWord[i];
  }
}

// Prints the guesses and the number of guesses
void Game::PrintGuesses() {
  cout << "Guesses were: ";
  for (int i = 0; i < NumGuesses; i++) {
    cout << " " << guesses[i].get_Guess();
  }
  cout << endl;
}
void Game::PrintNumGuesses() {
  cout << "Number of Guesses were: " << NumGuesses;
}

// Attain a guess from the user
string Game::get_guess() {
  cout << "The word is " << Word.length() << " characters long." << endl;

  cout << endl;
  cout << "Enter a letter: ";
  cin >> UserGuess;

  while (flag == 0) {
    flag = 1;

    if (isdigit(UserGuess[0]) != 0 || (UserGuess.length() != 1)) {
      cout << "Invalid Input. Retry" << endl;
      cout << "Enter a letter: ";
      cin >> UserGuess;
      flag = 0;
      break;
    }

    if (flag == 1) {
      for (int i = 0; i < AllGuesses.length(); i++) {
        if (UserGuess[0] == AllGuesses[i]) {
          cout << "Invalid Input. Retry" << endl;
          cout << "Enter a letter: ";
          cin >> UserGuess;
          flag = 0;
          break;
        }
      }
    }
  }

  UserGuess = ::tolower(UserGuess[0]);
  AllGuesses[k] = UserGuess[0];
  k++;

  j = 0;
  for (int i = 0; i < Word.length(); i++) {
    if (UserGuess[0] == Word[i]) {
      j++;
      UnknownWord[i] = Word[i];
      CorrectGuess++;
    }
  }

  return UserGuess;
}

// Determines whether the user won or lost the game
void Game::GameWL() {
  if (CorrectGuess == Word.length()) {
    cout << "Game Won! Congratulations! The word was: " << Word << endl;
  } else {
    cout << "Game Lost! The word was: " << Word << endl;
  }
}