#include "../Header Files/Game.h"
#include "../Header Files/Player.h"
#include "Multiplayer.cpp"
//#include "Singleplayer.cpp"
#include "../CPP Files/Graphics.cpp"

using namespace std;
#include <iostream>
#include <string>

int main() {
  Game Hangman;
  Graphics HangmanPicture;
  //Save s1,s2,s3,s4,s5;
 
  string UserPlayAgain = "Y";
  while (UserPlayAgain == "Y") {
    string NumOfPlayers;
    //string newLoad;

    // Determines whether the user is ready to commence the Hangman Game
    Hangman.is_player_ready();
    
    // Determines whether the user wants to load a game or play a new game
    //newLoad = Hangman.new_or_load();

    


    NumOfPlayers = Hangman.Number_of_Players();

    string Word;

    // Determines the mode the user wishes to play from Number of Players.
    if (NumOfPlayers == "2") {
      Player* TwoPlayer = new Multiplayer();
      Word = TwoPlayer->setWord();
    } else {
      // Player* OnePlayer = new Singleplayer();
      // Word OnePlayer->setWord();
    }

    // Defines the "Underscore" word which does not reveal letters that
    // have not been guesses
    Hangman.defineUnknownWord(Word);

    // While the user has not used all lives, and has not yet guessed the
    // word
    // the while loop will continue to execute
    cout << "The Word is " << Word.length() << " characters long." << endl;
    int NumLives = 0, CorrectGuess = 0, Increment, NumCorrect, i = 0;
    while ((NumLives < 6) && (CorrectGuess != Word.length())) {
      Hangman.PrintUnknownWord(Word);
      NumCorrect = Hangman.get_guess(Word);

      // If the incremented value is not equal to the previous Number of
      // correct guesses, it suggests the user has guessed correctly.
      Increment = CorrectGuess;
      CorrectGuess += NumCorrect;

      // Print the users guess logic based on input.
      if (CorrectGuess != Increment) {
        cout << "Correct Guess!" << endl;
      } else {
        cout << "Wrong Guess!" << endl;
        // The number of lives decreases.
        NumLives = Hangman.LoseLife();
        HangmanPicture.setNumLives(NumLives);
      }
      HangmanPicture.PrintHangmanGraphics();
    }
    // Determines whether the user won or lost, and displays the logic
    Hangman.GameWL(NumLives, Word);

    // Determines whether the user wishes to replay the Hangman UserPlayAgain =
    UserPlayAgain = Hangman.PlayAgain();
  }
  // If the user does not want to play again, they are thanked for
  cout << "Thanks for Playing!" << endl;
}
