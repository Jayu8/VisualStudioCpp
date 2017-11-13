// Cpp_based_examples.cpp : Defines the entry point for the console application.
//


// *********** Use Project type -> console not empty *******
// *************Use ctrl+F5 to compile without debug mode****************

// ********DONT USE CTRL+SHIFT+B to build as it builds all projects in the solution use play or CTRL+F5 *********

// ********VERY IMPORTANT TO SWITCH BETWEEN PROJECTS RIGHT_CLICK PROJECT -> set as startup project OR DEBUG START NEW INSTANCE**********
// if required both to strat then go to soln and right click setup startup project->multiple->start


#include <iostream> // not required as it is now part of C++ standard library


//using namespace std; // or use std::cout , std::endl 

int main()
{
	std::string str;

	std::cout << "hello" << std::endl;

	system("pause"); // Windows DOS alternative  to [getch() and conio.h]
	return 0;
}

