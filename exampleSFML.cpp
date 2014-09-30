/*
KeepConsoleOpenSFML example
by Hapax (http:://github.com/hapaxia)
July 2014

As the variable, zero, is a value of 1 (i.e. not 0), "Not zero!" is output to the console and then the application exits. The console is kept open until a key is pressed.
If you change the "zero = 1;" to "zero = 0;", "Perfectly zero." is output to the console before the application exits. The console is no longer held open.
*/

#include <iostream>
#include "KeepConsoleOpenSFML.hpp"

main()
{
	DEV::KeepConsoleOpenSFML keepConsoleOpen;

	int zero = 1;
	if (zero == 0)
		std::cout << "Perfectly zero." << std::endl;
	else // zero != 0
	{
		std::cout << "Not zero!" << std::endl;
		return EXIT_FAILURE;
	}

	keepConsoleOpen.allowToClose();
	return EXIT_SUCCESS;
}