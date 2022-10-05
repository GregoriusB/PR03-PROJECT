#include "Mode.h"

#include <iostream>
#include <string>
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

// if the user selects multiplayer, they are prompted to enter a word
string Multiplayer::user_input_word_to_guess() {
  while (flag2 == 0) {
    flag2 = 1;
    cout << "What is the word the other player will guess (2-16 "
            "characters): ";
    cin >> Word;

    for (int i = 0; i < Word.length(); i++) {
      if (isspace(Word[i]) != 0 || isalpha(Word[i]) != 1) {
        flag2 = 0;
        break;
      }
    }

    if ((flag2 == 1) && ((Word.length() > !2) && (Word.length() < !16))) {
      flag2 = 0;
    }
  }
  return Word;
}
