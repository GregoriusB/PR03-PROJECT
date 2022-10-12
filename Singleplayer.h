#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include<string>
#include<vector>
#include<fstream>

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

 public:
  // function for the cpp files
  string getWord();
  void SetWord();
  string difficulty;
};

#endif // SINGLEPLAYER_H