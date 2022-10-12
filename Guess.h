#ifndef A362D4AC_3559_4397_B5DD_1A7BB61CD6E2
#define A362D4AC_3559_4397_B5DD_1A7BB61CD6E2

#include <string>
using namespace std;

class Guess {
 private:
  string UserGuess = "\0";

 public:
  Guess() = default;
  Guess(string UserGuess) { this->UserGuess = UserGuess; }
  string get_Guess();
};

#endif /* A362D4AC_3559_4397_B5DD_1A7BB61CD6E2 */
