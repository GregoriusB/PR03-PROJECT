#include <stdlib.h>
#include <string.h>

#include <iostream>
using namespace std;

#include "GameCode.h"

void GuessWord::UserGuess(string Word) {
  cout << "The word is " << Word.length() << " characters long." << endl;

  for (int i = 0; i < Word.length(); i++) {
    UnknownWord[i] = 95;
  }

  while ((NumLife < 6) && (L != Word.length())) {
    for (int i = 0; i < Word.length(); i++) {
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

    j = 0;
    for (int i = 0; i < Word.length(); i++) {
      if (Guess[0] == Word[i]) {
        j++;
        UnknownWord[i] = Word[i];
      }
    }
    if (j != 0) {
      L++;
    } else {
      NumLife++;
    }
    AllGuesses[k] = Guess[0];
    k++;

    NumNotGuessed = 0;
    char *NotGuessed = new char[Word.length()];
    for (int i = 0; i < Word.length(); i++) {
      if (UnknownWord[i] != Word[i]) {
        NotGuessed[NumNotGuessed] = Word[i];
      }
    }
  }

  if (L == Word.length()) {
    cout << "Game Won! Congratulations! The word was: " << Word << endl;
  } else {
    cout << "Game Lost! The word was: " << Word << endl;
  }
}