#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Singleplayer {
 private:
  int flag3 = 0;
  string WordCategory;
  string line;
  vector<string> lines;
  int total_lines = 0;
  int random_number;

 protected:
  string Word;
  string difficulty;

 public:
  // function for the cpp files
  string getWord();
  void SetWord();
};

#endif  // SINGLEPLAYER_H