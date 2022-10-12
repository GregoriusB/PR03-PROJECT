#include "../CPP Files/Game.cpp"
#include "../CPP Files/Multiplayer.cpp"
#include "../CPP Files/Singleplayer.cpp"
#include "../Header Files/Guess.h"

using namespace std;
#include <iostream>

int main() {
  // Include Loadgame/SaveGame Here:
  // Instansiate game object
  Game* game;
  int score = game->loadProgress();

  // Initialise string value
  string PlayAgain = "Y";

  // If statement that determines whether the user wishes to replay the game.
  if (PlayAgain == "Y") {
    string NumPlayer;

    // Determines whether the user is ready to commence the game
    game->is_player_ready();
    // Attains the number of players, for singleplayer or multiplayer
    NumPlayer = game->Number_of_Players();

    string Word;
    // Determines the mode the user wishes to play based on the Number of
    // Players. Uses Abstraction and Polymorphism to achieve this
    if (NumPlayer != "1") {
      Multiplayer* game;
      game->setWord();
      Word = game->getWord();
    } else {
      Singleplayer* game;
      game->setWord();
      Word = game->getWord();
    }

    // Initilise variables that are necessary for main code.
    int NumLives = 0, CorrectGuess = 0, Increment;
    int NumCorrect;
    // Defines the "Underscore" word which does not reveal letters that have not
    // been guesses
    game->defineUnknownWord(Word);

    // While the user has not used all lives, and has not yet guessed the word,
    // the while loop will continue to execute
    while ((NumLives < 6) && (CorrectGuess != Word.length())) {
      game->PrintUnknownWord(Word);
      NumCorrect = game->get_guess();
      game->add_guess(UserGuess);

      // If the incremented value is not equal to the previous Number of correct
      // guesses, it suggests the user has guessed correctly.
      Increment = CorrectGuess;
      CorrectGuess += NumCorrect;

      // Print the users guess logic based on input.
      if (CorrectGuess != Increment) {
        cout << "Correct Guess!" << endl;
      } else {
        cout << "Wrong Guess!" << endl;
        // The number of lives decreases.
        NumLives++;
      }
    }

    // Determines whether the user won or lost, and displays the logic to the
    // terminal
    game->GameWL();
    // Game Stats:
    game->PrintGuesses();
    game->PrintNumGuesses();

    // Determines whether the user wishes to replay the game
    while (PlayAgain != "Y" || PlayAgain != "N") {
      cout << "Would you like to play again(Y/N)? ";
      cin >> PlayAgain;
    }
    // Operator used to delete the Object "game".
    delete game;
  } else {
    // If the user does not want to play again, they are thanked for playing.
    cout << "Thanks for Playing!" << endl;
    game->saveProgress(score);
  }
}
