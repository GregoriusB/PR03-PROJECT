#ifndef B4644E30_A41D_4767_A2FF_48884E70C8BE
#define B4644E30_A41D_4767_A2FF_48884E70C8BE

#include <string>
using namespace std;

class GuessWord {
 private:
  int NumLife = 0;
  int i = 0;

 protected:
  string Word, AllGuesses, WrongLetters, UnknownWord, Guess;
  int flag4 = 0, FindGuess, j = 0, k = 0, index[];

 public:
  string setWord(string Word);

  string setUnknown(string Word);

  bool NumLives();

  string UserGuess(string UnknownWord, string Word);
  string BoolGuess(char Guess);
};
#endif /* B4644E30_A41D_4767_A2FF_48884E70C8BE */
