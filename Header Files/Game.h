#ifndef F21E4D54_B801_4FC5_8ABB_82A868A15F3A
#define F21E4D54_B801_4FC5_8ABB_82A868A15F3A
#include <fstream>
#include <iostream>
#include <string>

#include "../Header Files/Guess.h"

using namespace std;

class Game {
 private:
  // Initialise private variables that can only be accessed by the class game.
  int NumGuesses = 0, NumLives = 0, flag = 0, j = 0, k = 0, CorrectGuess = 0,
      playerScore = 0;
  string NumPlayers = "0", UserGuess, Word, UnknownWord, AllGuesses,
         isPlayerReady = "\0";

  // Functions necessary for the computational output
 public:
  void is_player_ready();
  string Number_of_Players();

  // Functions for loading/ saving progress
  void clear();
  int loadProgress();
  int getScore(int score);
  void saveProgress(int score);

  // Initialise a Guess array of guess objects.
  Guess* guesses = new Guess[20];
  // get the guesses.
  Guess* get_guesses();

  // Asking the user for input of a letter
  int get_guess();
  // Adds a guess object to the guess array
  void add_guess(Guess a_guess);
  // Defines the unknownword that the user cannot see until they guess correctly
  void defineUnknownWord(string Word);
  // Determines whether the user won the game or lost
  void GameWL();

  // Prints the guesses, number of guesses, and the current unknownword
  void PrintGuesses();
  void PrintNumGuesses();
  void PrintUnknownWord(string Word);

  // abstraction to allow singleplayer/multiplayer
  virtual void setWord() = 0;
  virtual string getWord() = 0;
};

#endif /* F21E4D54_B801_4FC5_8ABB_82A868A15F3A */
