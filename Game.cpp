#include "Game.h"

void Game::start()
{




	std::cout << "     ______     \n";
	std::cout << "    |      |    \n";
	std::cout << "    |      O    \n";
	std::cout << "    |     \\|/  \n";
	std::cout << "    |      |    \n";
	std::cout << "    |     / \\  \n";
	std::cout << "    |           \n";
	std::cout << "____|____       \n";

	std::cout << "Welcome To Hangman\n";
	std::cout << "Please enter the secert: ";
	std::cin >> this->secert;

	std::cout << clearConsole;

	// TO-DO: Add an option for a user to select from a pre generated list of words or if they want to use their own

	std::cout << "     ______     \n";
	std::cout << "    |      |    \n";
	std::cout << "    |           \n";
	std::cout << "    |           \n";
	std::cout << "    |           \n";
	std::cout << "    |           \n";
	std::cout << "    |           \n";
	std::cout << "____|____       \n";




	// Init output string
	for (int i = 0; i < this->secert.length(); i++) {

		this->output[i] = ' ';

	}

	// Reset Variables
	this->foundLetters = 0;
	this->wrong = 0;
	this->guesses.clear();
	char output[sizeof(secert)];
	this->attempts = 0;



	guess();

}

void Game::guess()
{
	isEndGame();

	std::cout << "\n";
	if (this->attempts == 0) {

		for (int i = 0; i < this->secert.length(); i++) {
			std::cout << underlineStart << this->output[i] << underlineEnd << " ";
		}

	}
	else {

		for (int i = 0; i < this->secert.length(); i++) {
			std::cout << underlineStart << this->output[i] << underlineEnd << " ";
		}

		std::cout << "Letters guessed: ";
		for (int i = 0; i < this->guesses.size(); i++) {
			if (i == this->guesses.size() - 1) {
				std::cout << this->guesses[i];
			}
			else {
				std::cout << this->guesses[i] << ", ";
			}
		}
	}

	std::cout << "\nPlease enter the letter you wish to guess: ";
	std::cin >> this->in;

	if (int(this->in) >= 97)
		this->in -= 32;


	// Checking if that letter was guessed already
	for (int i = 0; i < this->guesses.size(); i++) {
		if (this->in == this->guesses[i]) {

			std::cout << "You already have guess that letter.";
			guess();
		}
	}

	this->guesses.push_back(in);
	this->attempts++;

	int test = 0;
	for (int i = 0; i < this->secert.length(); i++) {
		if (int(this->in) == this->secert[i] || int(this->in) + 32 == this->secert[i]) {
			this->output[i] = this->secert[i];
			this->foundLetters++;
			test++;

		}
	}
	if (test == 0) {
		wrong++;
	}



	drawPerson();




	guess();






}

void Game::drawPerson() {
	std::cout << clearConsole;
	std::cout << "Incorrect:  " << this->wrong << "/6" << std::endl;
	switch (this->wrong) {
	case 1:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |      O    \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
		guess();
	case 2:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |      O    \n";
		std::cout << "    |      |    \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
		guess();
	case 3:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |      O    \n";
		std::cout << "    |     \\|   \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
		guess();
	case 4:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |      O    \n";
		std::cout << "    |     \\|/  \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
		guess();
	case 5:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |      O    \n";
		std::cout << "    |     \\|/  \n";
		std::cout << "    |      |    \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
		guess();
	case 6:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |      O    \n";
		std::cout << "    |     \\|/  \n";
		std::cout << "    |      |    \n";
		std::cout << "    |     /     \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
		guess();

	case 7:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |      O    \n";
		std::cout << "    |     \\|/  \n";
		std::cout << "    |      |    \n";
		std::cout << "    |     / \\  \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
		guess();

	default:
		std::cout << "     ______     \n";
		std::cout << "    |      |    \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "    |           \n";
		std::cout << "____|____       \n";
	}
}

void Game::menu()
{
	std::cout << "\n1. Normal";
	std::cout << "\n2. Random\n";
	std::cin >> this->menuIn;
	switch (this->menuIn) {
	case 1:
		std::cout << clearConsole;
		start();
		break;
	default:
		std::cout << clearConsole;
		menu();
		break;
	}
}

bool Game::isEndGame()
{
	if (attempts > 0) {
		if (this->foundLetters == this->secert.length() && secert.length() > 0) {
			std::cout << "\nCongratulations! You guessed the word \"" << this->secert << "\" with " << this->attempts << " guesses.";
			menu();
			return true;
		}

		if (this->attempts >= 7) {
			std::cout << "Uh oh! You did not guess the word guessed the word. The word was " << underlineStart << this->secert << "." << underlineEnd;
			menu();
			return true;
		}

	}
	return false;
}
