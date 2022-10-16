#include "../Header Files/Save.h"

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Save::loadProgress1() {
  ifstream load("../Save Slots/save1.txt");
  while (getline(load, strPoints)) {
    playerPoints = stoi(strPoints);
  }
  load.close();
}

void Save::loadProgress2() {
  ifstream load("../Save Slots/save2.txt");
  while (getline(load, strPoints)) {
    playerPoints = stoi(strPoints);
  }
  load.close();
}

void Save::loadProgress3() {
  ifstream load("../Save Slots/save3.txt");
  while (getline(load, strPoints)) {
    playerPoints = stoi(strPoints);
  }
  load.close();
}

void Save::saveProgress1() {
  ofstream save;
  save.open("../Save Slots/save1.txt");
  if (save.is_open()) {
    if (playerPoints < 0) {
      playerPoints = 0;
    }
    // store contents to text file
    save << playerPoints << "\n";
    save.close();
  } else {
    cout << "Problem with opening file";
  }
}

void Save::saveProgress2() {
  ofstream save;
  save.open("../Save Slots/save2.txt");
  if (save.is_open()) {
    if (playerPoints < 0) {
      playerPoints = 0;
    }
    // store contents to text file
    save << playerPoints << "\n";
    save.close();
  } else {
    cout << "Problem with opening file";
  }
}

void Save::saveProgress3() {
  ofstream save;
  save.open("../Save Slots/save3.txt");
  if (save.is_open()) {
    if (playerPoints < 0) {
      playerPoints = 0;
    }
    // store contents to text file
    save << playerPoints << "\n";
    save.close();
  } else {
    cout << "Problem with opening file";
  }
}

int Save::getScore() {
    return playerPoints;
}

int Save::setScore(int numPoints) {
  playerPoints = numPoints;
  return playerPoints;
}