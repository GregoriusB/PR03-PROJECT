// include header file
#include "../CPP/Multiplayer.cpp"
#include "../CPP/Singleplayer.cpp"
#include "../Header Files/Mode.h"

using namespace std;
#include <iostream>

int main() {
  Mode UserMode;
  Multiplayer UserMultiplayer;
  SinglePlayer UserSinglePlayer;

  UserMode.is_player_ready();

  string Players;
  Players = UserMode.Number_of_Players();

  string Word;
  if (Players == "2") {
    Word = UserMultiplayer.user_input_word_to_guess();
  } else {
    Word = UserSinglePlayer.word_category();
  }
}