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
  string Empty = "";

 protected:
  string Word;

 public:
  string SetWord();
  string GetWord();
};

class SinglePlayer : public Mode {
 private:
  int flag3 = 0;
  string WordCategory;
  string line;
  vector<string> lines;
  int total_lines = 0;
  int random_number;

 protected:
  string Word;

 public:
  string SetWord();
};

class GuessWord : public SinglePlayer, public Multiplayer {
 private:
  string AllGuesses, WrongLetters, UnknownWord, Guess;
  int flag4 = 0, FindGuess, j = 0, k = 0, L = 0, NumLife = 0;

 public:
  string setUnknown(string Word);

  void UserGuess(string Word);
};

#endif