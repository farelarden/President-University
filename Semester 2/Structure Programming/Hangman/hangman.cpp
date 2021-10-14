/*
 * This program replicates the first, second and third parts of a Hangman game.
 * I have added comments below that should sufficiently explain what it does.
*/
#include <iostream>
using namespace std;

int main() {
	int num_guesses = 10;
	string dashes = "-----------";
	string word = "programming";
	string guess;

	// This loop will execute while the number of guesses is greater than 0 and
	// the dashes variable doesn't store the word.
	while (num_guesses > 0 && dashes != word) {
		cout << dashes << endl;
		cout << num_guesses << " incorrect guesses left. " << endl;
		cout << "Guess: ";
		getline(cin, guess);

		// Determines if the guess is more than one character.
		if (guess.length() > 1) {
			cout << "That is more than one character.";
		}

		// Determines if the guess is a lowercase letter.
		else if (guess[0] > 'z' || guess[0] < 'a') {
			cout << "Your guess must be a lowercase letter. ";
		}

		// First, the program finds the guess in the word. If it is found, the
		// dashes at which their guess occurs will be replaced with the user's
		// guess. Otherwise, the number of guesses will be decremented by 1.
		else {
			size_t index_found = word.find(guess);
			if (index_found != string::npos) {
				for (int i = 0; i < word.length(); i++) {
					if (word[i] == guess[0]) {
						dashes[i] = guess[0];
					}
				}
				cout << "Correct!" << endl;
			} else {
				cout << "Incorrect!" << endl;
				num_guesses = num_guesses - 1;
			}
		}
	}

	// Determines whether the player lost or won. Either way, the word will
	// still be printed so they know what the word was.
	if (dashes == word) {
		cout << "You win!" << endl;
		cout << "The word was: " << word << endl;
	} else {
		cout << "You lose." << endl;
		cout << "The word was: " << word << endl;
	}
}
