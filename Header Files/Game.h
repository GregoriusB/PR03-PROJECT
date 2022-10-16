#ifndef GAME_H
#define GAME_H

#include <fstream>
#include <iostream>
#include <string>

#include "Save.h"

using namespace std;

class Game {
 private:
  // Initialise private variables that can only be accessed by the class game.
  int flag = 0, j = 0, k = 0, CorrectGuess = 0, NumGuesses = 0, playerScore = 0,
      NumPoints = 0;
  string NumPlayers = "0", UserGuess, UnknownWord, AllGuesses,
         isPlayerReady = "\0", UserPlayAgain, newOrLoad = "\0",
         newGameSave = "\0";

 protected:
  int NumLives = 0;
  // Functions necessary for the computational output
 public:
  Save *saveSlots = new Save[5];
  bool addSave(Save newSave);
  void clearProgress();
  void is_player_ready();
  string Number_of_Players();

  // Functions for loading/ saving progress
  string new_or_load();
  string newGame();
  string loadGame();
  void clear();
  int loadProgress();
  void saveProgress(int score);

  // Asking the user for input of a letter
  int get_guess(string Word);
  int LoseLife();

  // Defines the unknownword that the user cannot see until they guess correctly
  void defineUnknownWord(string Word);
  void PrintUnknownWord(string Word);
  // Determines whether the user won the game or lost
  void GameWL(int NumLives, string Word);

  string PlayAgain();
};

#endif /* GAME_H */
