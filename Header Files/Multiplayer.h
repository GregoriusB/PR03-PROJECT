#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H

#include "../Header Files/Game.h"

class Multiplayer : public Game {
 private:
  int flag = 0;
  string Empty = "";

 protected:
  string Word;

 public:
  Multiplayer(){};
  void setWord();
  string getWord();
};

#endif /* MULTIPLAYER_H */
