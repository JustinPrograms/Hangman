#pragma once
#include <iostream>
#include <vector>

// Ansi Escape Sequences
#define underlineStart "\033[4m"
#define underlineEnd "\033[0m"

#define clear "\x1B[2J\x1B[H"
//#define clear "\n"

class Game
{

public:
	std::string secert;
	unsigned int foundLetters = 0;
	unsigned int wrong = 0;
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

