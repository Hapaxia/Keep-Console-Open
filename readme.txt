KeepConsoleOpen
by Hapax (github.com/hapaxia)
July 2014

KeepConsoleOpen are classes that allows an application to automatically keep the console open after closing.

KeepConsoleOpenSFML is intended to be used with SFML (www.sfml-dev.org) so SFML is required to use this code as is.
KeepConsoleOpenBasic is provided for use if SFML is not available.

To use the class in an application, create an instance of the class at the start of main(). When the program exits, the console will request a keyboard interaction with the user. What this interaction is in dependant on what is - or is not - defined in the class:
If ENTER_KEY_TO_CLOSE_CONSOLE is defined (it is not, by default, as that line is commented out), the user is required to press the Enter key to close the console after the application has closed.
If it is not defined (default) then any key can be used to close the console.

If you wish for the console to still be closed in certain situations (e.g. no errors), you can call the function allowToClose() of the the instance and the console will not be held open. A useful place for this would be immediately before the final return in main()
e.g.
keepConsoleOpen.allowToClose();
return EXIT_SUCCESS; // or return 0;

Please note that this code is only designed to aid through the creation and debugging of projects. It allows the console to be viewed after the application has completed its tasks. It is recommended that, when the code released, any use of this code is removed. For this reason, the classes are placed into a "DEV" namespace.

Using this class is not necessary if the console display will already continue to be shown after the application has ended e.g. if the application is launched from a console window.