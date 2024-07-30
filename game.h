#pragma once

#include <iostream>

#include <Windows.h>

// Goals
// - Create a "simple" 2D Console game
// - Exercise best practices and adhere to the Google C++ Style Guide to the best of my ability
// - ***Don't let perfect me the enemy of good***

// TODO
// 
// Create a Console
// - Make it sizeable
// - Interact with the console buffer
// - Capture User K&M input
// 
// Gameplay Loop
// - "Graphical" Main Menu
// - Enter a game
// - Play through a number a predetermined levels or until user "dies"
// - Reutrn to main menu
//
// Extra Goals
// - Create a savestate so that a game can be paused and fully exited and so that scores can be recorded
// - Train an AI model to control the enemies

// Notes
// - Consoles are for applications that do not have their own GUIs
// - May need to have a "character mode application" that runs the game...but the console is a "separate" (attached) application that provides user input and rendering output
// ^this probably can just be handled in the same executable...it just has to reference itself???

class Game
{
public:
	int run(void);

private:
	int create_console(void);
};