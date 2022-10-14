#include "../Header Files/Game.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// Gets Player's score
int Game::getScore(int score) {
  playerScore = score;
  return playerScore;
}

// Saves to progress
void Game::saveProgress(int score) {
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

// Checks for progress
int Game::loadProgress() {
  int myPoints = 0;
  string strPoints;
  ifstream load("/Users/kj/Documents/PR03-PROJECT/progress.txt");
  while (getline(load, strPoints)) {
    myPoints = stoi(strPoints);
  }
  load.close();
  return myPoints;
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
  cout << endl;
}

// Attain a guess from the user
int Game::get_guess(string Word) {
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

  CorrectGuess = 0;
  for (int i = 0; i < Word.length(); i++) {
    if (UserGuess[0] == Word[i]) {
      UnknownWord[i] = Word[i];
      CorrectGuess++;
    }
  }

  AllGuesses[j] = UserGuess[0];
  j++;

  return CorrectGuess;
}

int Game::LoseLife() {
  NumLives++;
  return NumLives;
}

// Determines whether the user won or lost the game
void Game::GameWL(int NumLives, string Word) {
  cout << endl;
  if (NumLives < 6) {
    cout << "Game Won! Congratulations! The word was: " << Word << endl;
  } else {
    cout << "Game Lost! The word was: " << Word << endl;
  }
}

string Game::PlayAgain() {
  while (UserPlayAgain != "Y" && UserPlayAgain != "N") {
    cout << "Would you like to play again(Y/N)? ";
    cin >> UserPlayAgain;
  }
  system("clear");
  return UserPlayAgain;
}