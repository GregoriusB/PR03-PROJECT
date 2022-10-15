#include "../Header Files/SingleplayerHard.h"

#include <stdlib.h>

#include <ctime>
#include <iostream>
#include <string>

using namespace std;

string SinglePlayerHard::setWord() {
  // if else statement for hard difficulty
  while (flag3 == 0) {
    flag3 = 1;
    // give information to the user what are the available categories
    cout << "Please select a category from one of the following: " << endl
         << "Sports (1): Basketball, Football, Cricket, Tennis" << endl
         << "Space (2): Planets, Stars, Gravity" << endl
         << "Nature (3): Animals, trees, plants, climate" << endl
         << "Other (4): Unknown..." << endl;
    cout << "Category (1,2,3,4): ";
    cin >> WordCategory;

    // first category(Sports hard)
    if (WordCategory == "1") {
      // get random words from the array
      srand(time(0));
      int random = rand() % 7;
      Word = SportHard[random];
    }

    // second category(Space hard)
    else if (WordCategory == "2") {
      // get random words from the array
      srand(time(0));
      int random = rand() % 7;
      Word = SpaceHard[random];
    }

    // third category(Nature hard)
    if (WordCategory == "3") {
      // get random words from the array
      srand(time(0));
      int random = rand() % 7;
      Word = NatureHard[random];
    }

    // fourth category(Random Subjects hard)
    else if (WordCategory == "4") {
      // get random words from the array
      srand(time(0));
      int random = rand() % 7;
      Word = AussieHard[random];
    }

    // Invalid input print
    else {
      flag3 = 0;
      cout << "Invalid Input. Retry." << endl;
    }
  }
  return Word;
}
