#ifndef DEV_KEEPCONSOLEOPENBASIC_HPP
#define DEV_KEEPCONSOLEOPENBASIC_HPP

// http:://github.com/hapaxia

#include <iostream>

namespace DEV
{

// Keeps console open when application is closed. "Basic" does not require external libraries.
class KeepConsoleOpenBasic
{
public:
	~KeepConsoleOpenBasic()
	{
		if (!m_allowToClose)
		{
			// enter to close
			std::cin.clear();
			std::cin.sync();
			std::cout << std::endl << "Press Enter to close the console." << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // wait for Enter to be pressed
		}
	}

	void allowToClose()
	{
		m_allowToClose = true;
	}

private:
	bool m_allowToClose = false;
};

} // namespace DEV

#endif // DEV_KEEPCONSOLEOPENBASIC_HPP