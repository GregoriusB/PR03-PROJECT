#include "../Header Files/Game.h"
#include "../Header Files/Multiplayer.h"
#include "../Header Files/Singleplayer.h"

using namespace std;
#include <iostream>

int main() {
  // Instansiate game objects
  Game* Hangman;
  int score = Hangman->loadProgress();

  // If statement that determines whether the user wishes to replay the Hangman.
  string UserPlayAgain = "Y";
  if (UserPlayAgain == "Y") {
    string NumOfPlayers;

    // Determines whether the user is ready to commence the Hangman Game
    Hangman->is_player_ready();
    // Attains the number of players, for singleplayer or multiplayer
    // NumOfPlayers = Hangman->Number_of_Players();

    string Word;
    Multiplayer* TwoPlayer;
    TwoPlayer->setWord();
    Word = TwoPlayer->getWord();
    // Determines the mode the user wishes to play based on the Number of
    // Players.
    // if (NumOfPlayers == "2") {

    // } else {
    //   SinglePlayer* OnePlayer = new SinglePlayer();
    //   OnePlayer->setWord();
    //   Word = OnePlayer->getWord();
    // }

    // Initilise variables that are necessary for main code.
    int NumLives, CorrectGuess = 0, Increment;
    int NumCorrect;

    // Defines the "Underscore" word which does not reveal letters that
    // have not been guesses
    Hangman->defineUnknownWord(Word);

    // While the user has not used all lives, and has not yet guessed the
    // word
    // the while loop will continue to execute
    int i = 0;
    while ((NumLives < 6) && (CorrectGuess != Word.length())) {
      Hangman->PrintUnknownWord(Word);
      NumCorrect = Hangman->get_guess(Word);

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
        NumLives = Hangman->LoseLife();
      }
    }

    // Determines whether the user won or lost, and displays the logic
    Hangman->GameWL(Word);
    // Hangman Stats:
    Hangman->PrintGuesses();
    Hangman->PrintNumGuesses();

    // Determines whether the user wishes to replay the Hangman
    while (UserPlayAgain != "Y" || UserPlayAgain != "N") {
      cout << "Would you like to play again(Y/N)? ";
      cin >> UserPlayAgain;
    }
  } else {
    // If the user does not want to play again, they are thanked for
    cout << "Thanks for Playing!" << endl;
    Hangman->saveProgress(score);
  }
}
