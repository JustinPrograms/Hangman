#pragma once
#include <iostream>
#include <vector>

// Ansi Escape Sequences
#define underlineStart "\033[4m"
#define underlineEnd "\033[0m"

#define clearConsole "\x1B[2J\x1B[H"
//#define clearConsole "\n"

class Game
{

public:
	std::string secert;
	unsigned int foundLetters;
	unsigned int wrong;
	char in;
	int menuIn;
	std::vector<char> guesses;
	char output[sizeof(secert)];

	unsigned int attempts = 0;

	// Init public functions
	void start();
	void guess();
	void drawPerson();
	void menu();

	// Accessors 
	bool isEndGame();




};

