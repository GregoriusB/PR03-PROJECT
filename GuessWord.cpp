#include <string.h>

#include <cstring>
#include <iostream>
using namespace std;

#include "GuessWord.h"

string GuessWord::setWord(string Word) {
  cout << "The word is " << Word.length() << "characters long." << endl;
  this->Word = Word;
  return this->Word;
}

string GuessWord::setUnknown(string Word) {
  while (i != Word.length()) {
    UnknownWord[i] = '0' + 95;
    i++;
  }
  return UnknownWord;
}

bool GuessWord::NumLives() {
  if (NumLife != 6) {
    NumLife++;
    return true;
  } else {
    return false;
  }
}

string GuessWord::UserGuess(string UnknownWord, string Word) {
  while (NumLife > 6) {
    for (int i = 0; i < UnknownWord.length(); i++) {
      cout << UnknownWord[i];
    }
    cout << endl;
    cout << "Enter a letter: ";
    cin >> Guess;
    while (flag4 == 0) {
      flag4 = 1;

      if (isdigit(Guess[0]) != 0 || (Guess.length() != 1)) {
        cout << "Invalid Input. Retry" << endl;
        cout << "Enter a letter: ";
        cin >> Guess;
        flag4 = 0;
        break;
      }

      if (flag4 == 1) {
        for (int i = 0; i < AllGuesses.length(); i++) {
          if (Guess[0] == AllGuesses[i]) {
            cout << "Invalid Input. Retry" << endl;
            cout << "Enter a letter: ";
            cin >> Guess;
            flag4 = 0;
            break;
          }
        }
      }
    }

    Guess = ::tolower(Guess[0]);
    
    for (int i = 0; i < Word.length(); i++) {
      if (Guess[0] == Word[i]) {
        j++;
        UnknownWord[i] = Word[i];
      }
    }
    if (j != 0) {
      cout << "Correct Guess!" << endl;
    } else {
      cout << "Wrong Guess!" << endl;
    }
    AllGuesses[k] = Guess[0];
    k++;
  }
}