#ifndef SAVE_H
#define SAVE_H
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Save {
  // initializing variables for save files
  private:
  string strPoints;
  
  protected:
    int playerPoints = 0;

  public:
    // function to load or/and save the game
    Save() = default;
    void loadProgress1();
    void loadProgress2();
    void loadProgress3();
    void saveProgress1();
    void saveProgress2();
    void saveProgress3();
    int setScore(int numPoints);
    int getScore();
};

#endif