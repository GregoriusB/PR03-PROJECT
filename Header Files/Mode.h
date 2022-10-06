#ifndef MODE_H
#define MODE_H

#include <stdlib.h>

#include <fstream>
#include <string>
#include <vector>

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
 private:
  int flag3 = 0;
  string WordCategory;
  string line;
  vector<string> lines;
  int total_lines = 0;
  int random_number;

 public:
  string word_category();
};

#endif