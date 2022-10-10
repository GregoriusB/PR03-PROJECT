#include "Header Files/Mode.h"

#include <iostream>
#include <string>

#include "../Driver/ModeM.cpp"

using namespace std;

// Determines whether the player is ready to commence the game.
void Mode::is_player_ready() {
  while (PlayerReady != "Y") {
    cout << "Are your ready to commence the game (Y): ";
    cin >> PlayerReady;
  }
}

// Number of Players
string Mode::Number_of_Players() {
  while ((NumPlayers != "1") && (NumPlayers != "2")) {
    cout << "How many Players (1 or 2): ";
    cin >> NumPlayers;
  }
  return NumPlayers;
}