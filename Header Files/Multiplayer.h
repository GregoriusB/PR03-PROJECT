#ifndef C0A29705_300A_4303_9409_F4295690B236
#define C0A29705_300A_4303_9409_F4295690B236

#include "Game.h"

class Multiplayer : public Game {
 private:
  int flag = 0;
  string Empty = "";

 protected:
  string Word;

 public:
  void SetWord();
  string GetWord();
};

#endif /* C0A29705_300A_4303_9409_F4295690B236 */
