#include "Header Files/SaveSystem.h"
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

// Checks for progress
bool::SaveSystem::checkProgress(){
    ifstream read("progress.txt");
    if(!read){
        return 0;
        return false;
    } else{
        return true;
    }
}
