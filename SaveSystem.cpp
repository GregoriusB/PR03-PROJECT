#include "SaveSystem.h"

#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Checks for progress
bool SaveSystem::checkProgress() {
  ifstream read("progress.txt");
  if (!read) {
    return false;
  } else {
    ifstream progress("progress.txt");
    progress >> playerScore;
    NumPoints = playerScore;
    return true;
  }
}
// Gets Player's score
int ::SaveSystem::getScore() {
  playerScore = NumPoints;
  return playerScore;
}

// Saves to progress
void ::SaveSystem::saveProgress() {
  ofstream progress("progress.txt");
  progress << playerScore;
}