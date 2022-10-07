// include header file
#include "Mode.h"
#include "Multiplayer.cpp"
//#include "Singleplayer.cpp"

using namespace std;
#include <iostream>

int main() {
  Mode UserMode;
  Multiplayer UserMultiplayer;
  // SinglePlayer UserSinglePlayer;

  UserMode.is_player_ready();

  string Players;
  Players = UserMode.Number_of_Players();

  string Word;
  if (Players == "2") {
    Word = UserMultiplayer.user_input_word_to_guess();
  } else {
    // Word = UserSinglePlayer.word_category();
  }
}