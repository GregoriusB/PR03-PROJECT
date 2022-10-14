#include "../Header Files/Graphics.h"

using namespace std;
#include <iostream>

void Graphics::setNumLives(int NumLives) { this->NumLives = NumLives; }

void Graphics::PrintHangmanGraphics() {
  switch (NumLives) {
    case 0:
      cout << "_____ \n";
      cout << "|    | \n";
      cout << "|    O\n";
      cout << "|     \n";
      cout << "------ \n";
      break;
    case 1:
      cout << "_____ \n";
      cout << "|    | \n";
      cout << "|    O\n";
      cout << "|    |\n";
      cout << "|     \n";
      cout << "------ \n";
      break;
    case 2:
      cout << "_____ \n";
      cout << "|    | \n";
      cout << "|    O\n";
      cout << "|   [| \n";
      cout << "|     \n";
      cout << "------ \n";
    case 3:
      cout << "_____ \n";
      cout << "|    | \n";
      cout << "|    O\n";
      cout << "|   [| \n";
      cout << "|     \n";
      cout << "------ \n";
      break;
    case 4:
      cout << "_____ \n";
      cout << "|    | \n";
      cout << "|    O\n";
      cout << "|   [|]\n";
      cout << "|     \n";
      cout << "------ \n";
      break;
    case 5:
      cout << "_____ \n";
      cout << "|    | \n";
      cout << "|    O\n";
      cout << "|   [|]\n";
      cout << "|   | \n";
      cout << "------ \n";
      break;
    case 6:
      cout << "_____ \n";
      cout << "|    | \n";
      cout << "|    O\n";
      cout << "|   [|]\n";
      cout << "|   | |\n";
      cout << "------\n";
      break;
  }
}