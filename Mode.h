#ifndef MODE_H
#define MODE_H

#include <string>
using namespace std;

class Mode {
 private:
  string PlayerReady = "\0";

 protected:
  string NumPlayers;
  int flag1 = 0;
  string Word;

 public:
  void is_player_ready();
  string Number_of_Players();
};

class Multiplayer : public Mode {
 private:
  int flag2 = 0;

 public:
  string user_input_word_to_guess();
};

class SinglePlayer : public Mode {
 public:
  int word_category();
};

#endif