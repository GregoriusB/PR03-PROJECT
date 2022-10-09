#include <string>

#include "Mode.h"
using namespace std;
#include <iostream>

// if the user selects multiplayer, they are prompted to enter a word
string Multiplayer::user_input_word_to_guess() {
  cout << "What is the word the other player will guess (2-16 "
          "characters): ";
  cin >> Word;
  while (flag2 == 0) {
    flag2 = 1;

    for (int i = 0; i < Word.length(); i++) {
      while (isdigit(Word[i]) != 0 ||
             ((Word.length() < 1) || (Word.length() > 17))) {
        Word.assign(Empty);
        cout << "Invalid Input. Retry" << endl;
        cout << "What is the word the other player will guess (2-16 "
                "characters): ";
        cin >> Word;
        flag2 = 0;
        break;
      }
    }
  }
  for (int i = 0; i < Word.length(); i++) {
    Word[i] = tolower(Word[i]);
  }
  return Word;
}