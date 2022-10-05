#include "Mode.h"

#include <iostream>
using namespace std;


//MODE FUNCTIONS:

// Determines whether the player is ready to commence the game.
void Mode::is_player_ready() {
  while (PlayerReady != "Y") {
    cout << "Are your ready to commence the game (Y): ";
    cin >> PlayerReady;
  }
}

// Number of Players
int Mode::Number_of_Players() {
  while ((NumPlayers != 1) || (NumPlayers != 2)) {
    cout << "How many Players (1 or 2): ";
    cin >> NumPlayers;
  }
  return NumPlayers;
}



//MULTIPLAYER FUNCTIONS:

int Multiplayer::user_input_word_to_guess(){

}