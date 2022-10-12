#include <iostream>

#include "../CPP Files/Game.cpp"
#include "../CPP Files/Singleplayer.cpp"
#include "../CPP Files/Multiplayer.cpp"
#include "../Header Files/Guess.h"
using namespace std;

int main() {
  // Include Loadgame/SaveGame Here:
  // Instansiate game object
  Game* game;
  int score = game->loadProgress();

  // Initialise string value
  string PlayAgain = "Y";

  // If statement that determines whether the user wishes to replay the game.
  if (PlayAgain == "Y") {
    string NumPlayer;

    // Determines whether the user is ready to commence the game
    game->is_player_ready();
    // Attains the number of players, for singleplayer or multiplayer
    NumPlayer = game->Number_of_Players();

    string Word;
    // Determines the mode the user wishes to play based on the Number of
    // Players. Uses Abstraction and Polymorphism to achieve this
    if (NumPlayer != "1") {
      Multiplayer* game;
      game->setWord();
      Word = game->getWord();
    } else {
      SinglePlayer* game;
      game->setWord();
      Word = game->getWord();
    }
  }