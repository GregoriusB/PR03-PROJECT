// include header file
#include "Mode.h"

using namespace std;
#include <iostream>

int main() {
  Mode UserMode;
  Multiplayer UserMultiplayer;
  SinglePlayer UserSinglePlayer;

  UserMode.is_player_ready();

  int Players;
  Players = UserMode.Number_of_Players();

  if (Players == 2) {
    UserMultiplayer.user_input_word_to_guess();
  } else {
    UserSinglePlayer.word_category();
  }
}