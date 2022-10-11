#include "GameCode.h"
#include "GuessWord.cpp"
#include "Multiplayer.cpp"
//#include "Singleplayer.cpp"

using namespace std;
#include <iostream>

int main() {
  Mode NumP_ReadyP;
  NumP_ReadyP.is_player_ready();
  NumP_ReadyP.Number_of_Players();

  Multiplayer UserMultiplayer;
  GuessWord Guess_Word;

  /* SinglePlayer SinglePlayer;
  UserSinglePlayer.SetWord();
  */

  UserMultiplayer.SetWord();
  Guess_Word.UserGuess(UserMultiplayer.GetWord());
}
