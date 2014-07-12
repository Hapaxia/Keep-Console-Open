#ifndef INC_KEEPCONSOLEOPEN_H
#define INC_KEEPCONSOLEOPEN_H

// github.com/hapaxia

#include <iostream>
#include <SFML\Window\Keyboard.hpp>

class KeepConsoleOpen
{
public:
	~KeepConsoleOpen()
	{
		if (!m_allowToClose)
		{
//#define ENTER_KEY_TO_CLOSE_CONSOLE
#ifdef ENTER_KEY_TO_CLOSE_CONSOLE
			// enter to close
			std::cout << std::endl << "Press Enter to close the console." << std::endl;
			while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
			{
			}
#else
			// any key to close
			std::cout << std::endl << "Press any key to close the console." << std::endl;
			bool anyKeyPressed = false;
			while (!anyKeyPressed)
			{
				for (int k = -1; k < sf::Keyboard::KeyCount; k++)
				{
					if (sf::Keyboard::isKeyPressed(static_cast<sf::Keyboard::Key>(k)))
						anyKeyPressed = true;
				}
			}
#endif // ENTER_KEY_TO_CLOSE_CONSOLE
		}
	}

	void allowToClose()
	{
		m_allowToClose = true;
	}

private:
	bool m_allowToClose = false;
};

#endif // INC_KEEPCONSOLEOPEN_H