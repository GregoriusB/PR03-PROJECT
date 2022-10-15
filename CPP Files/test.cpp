#include <iostream>

#include "../CPP Files/Singleplayer.cpp"
#include "../CPP Files/SingleplayerEasy.cpp"
#include "../CPP Files/SingleplayerHard.cpp"
using namespace std;

int main() {
  SinglePlayerEasy player1Easy;
  SinglePlayerHard player1Hard;
  Singleplayer game1;
  string mode;
    // work on why it said that singleplayer::getDifficulty() has multiple definition
  mode = game1.getDifficulty();
  if (mode == "Easy") {
    player1Easy.setWord();
  } else if (mode == "Hard") {
    player1Hard.setWord();
  }
}