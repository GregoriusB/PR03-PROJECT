#ifndef A362D4AC_3559_4397_B5DD_1A7BB61CD6E2
#define A362D4AC_3559_4397_B5DD_1A7BB61CD6E2

#include <string>
using namespace std;

class Guess {
  // Private variables only accessible to the class 'Guess'
 private:
  string UserGuess = "\0";

 public:
  // Setting a default constructor
  Guess() = default;
  // sets the users guess
  Guess(string UserGuess) { this->UserGuess = UserGuess; }
  // attains the guess
  string get_Guess();
};

#endif /* A362D4AC_3559_4397_B5DD_1A7BB61CD6E2 */
