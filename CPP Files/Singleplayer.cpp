#include "../Header Files/Singleplayer.h"

#include <stdlib.h>

#include <ctime>
#include <iostream>
#include <string>

using namespace std;

string Singleplayer::getDifficulty() {
  // ask user what difficulty level they want to play
  cout << "Enter difficulty level (Easy, Hard): ";
  cin >> difficulty;
  // use while loop to keep asking the user easy or hard difficulty
  while (difficulty != "Easy" && difficulty != "Hard") {
    cout << "Enter difficulty level (Easy, Hard): ";
    cin >> difficulty;
  }
  return difficulty;
}
