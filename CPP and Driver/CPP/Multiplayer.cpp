#include <string>

#include "Mode.h"
using namespace std;
#include <iostream>

// if the user selects multiplayer, they are prompted to enter a word
string Multiplayer::user_input_word_to_guess() {
  while (flag2 == 0) {
    flag2 = 1;
    cout << "What is the word the other player will guess (2-16 "
            "characters): ";
    cin >> Word;

    for (int i = 0; i < Word.length(); i++) {
      if (isdigit(Word[i]) != 0 || (Word.length() < 2) ||
          (Word.length() > 16)) {
        cout << "Invalid Input. Retry" << endl;
        flag2 = 0;
        break;
      }
    }
  }
  return Word;
}