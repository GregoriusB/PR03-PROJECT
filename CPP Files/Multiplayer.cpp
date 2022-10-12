#include "../Header Files/Multiplayer.h"

#include "Game.h"
using namespace std;
#include <iostream>

void Multiplayer::SetWord() {
  cout << "What is the word the other player will guess (2-16 "
          "characters): ";
  cin >> Word;
  while (flag == 0) {
    flag = 1;

    for (int i = 0; i < Word.length(); i++) {
      // while loop to ensure the user enters a valid word
      while (isdigit(Word[i]) != 0 ||
             ((Word.length() < 2) || (Word.length() > 16))) {
        Word.assign(Empty);
        cout << "Invalid Input. Retry" << endl;
        cout << "What is the word the other player will guess (2-16 "
                "characters): ";
        cin >> Word;
        flag = 0;
        break;
      }
    }
  }
  for (int i = 0; i < Word.length(); i++) {
    Word[i] = tolower(Word[i]);
  }
}

string Multiplayer::GetWord() { return Word; }