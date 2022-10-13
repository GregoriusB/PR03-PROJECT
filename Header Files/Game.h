#ifndef GAME_H
#define GAME_H

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Game {
 private:
  // Initialise private variables that can only be accessed by the class game.
  int flag = 0, j = 0, k = 0, CorrectGuess = 0, playerScore = 0, NumGuesses = 0;
  string NumPlayers = "0", UserGuess, UnknownWord, AllGuesses,
         isPlayerReady = "\0";

 protected:
  int NumLives = 0;

  // Functions necessary for the computational output
 public:
  void is_player_ready();
  string Number_of_Players();

  // Functions for loading/ saving progress
  void clear();
  int loadProgress();
  int getScore(int score);
  void saveProgress(int score);

  // Asking the user for input of a letter
  int get_guess(string Word);
  int LoseLife();

  // Defines the unknownword that the user cannot see until they guess correctly
  void defineUnknownWord(string Word);
  void PrintUnknownWord(string Word);
  // Determines whether the user won the game or lost
  void GameWL(string Word);

  // Prints the guesses, number of guesses, and the current unknownword
  void PrintGuesses();
  void PrintNumGuesses();

  // abstraction to allow singleplayer/multiplayer
  virtual void setWord() = 0;
  virtual string getWord() = 0;
};

#endif /* GAME_H */
