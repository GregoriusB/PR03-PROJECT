#ifndef SAVESYSTEM.H
#define SAVESYSTEM.H
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std; 

class SaveSystem {
    private:
    public:
        bool checkProgress();
        int getScore();
        void saveProgress();

};



#endif

