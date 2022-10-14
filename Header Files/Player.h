#ifndef PLAYER_H
#define PLAYER_H

using namespace std;
#include <string>

class Player {
 public:
  virtual string setWord() = 0;
};

class Multiplayer : public Player {
 private:
  int flag = 0;
  string Empty = "";
  string Word;

 public:
  string setWord();
};
#endif /* PLAYER_H */
