#ifndef MODE_H
#define MODE_H

#include <string>
using namespace std;

class Mode {
 protected:
  string PlayerReady = "\0";
  int NumPlayers = -1;
  bool flag = false;

 public:
  void is_player_ready();
  int Number_of_Players();
};
#endif

class Multiplayer : public Mode {
 public:
  int user_input_word_to_guess();
};

class SinglePlayer : public Mode {
 public:
  int word_category();
};