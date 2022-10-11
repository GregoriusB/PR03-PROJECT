#include <iostream>
#include <string>
#include "GameCode.h"
using namespace std;

// Determines whether the player is ready to commence the game.
void Mode::is_player_ready() {
  // while loop to ensure player correctly inputs
  while (PlayerReady != "Y") {
    cout << "Are your ready to commence the game (Y): ";
    cin >> PlayerReady;
  }
}

// Number of Players
string Mode::Number_of_Players() {
  // While loop to make sure player enters a valid number of players
  while ((NumPlayers != "1") && (NumPlayers != "2")) {
    cout << "How many Players (1 or 2): ";
    cin >> NumPlayers;
  }
  return NumPlayers;
}