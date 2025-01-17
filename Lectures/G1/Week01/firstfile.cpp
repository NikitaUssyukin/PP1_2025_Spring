#include <iostream> // adds iostream library to our program
// iostream is needed for cin and cout

using namespace std; // this line of code is needed to avoid typing std::
/*
example:

cin
cout

instead of

std::cin
std::cout 

*/

int main() { // main function, the entry point of a program

    // within the curly braces {} of the main function we have our actual code
    // that comprises our program

    cout << "Hello, KBTU!" << endl;

    return 0; // stops the function, in the case of main function - stops the program
    // not absolutely necessary
}

/*
terminal commands:
pwd - print working directory
ls - list what is located in the curent working directory
arrows up/down - scroll through the command history

compiling and running a program:
1. Open the terminal in the correct directory
2. g++ filename.cpp - command to compile the program
3. if you don't get any messages - compilation is successful and you get an executable file
    1. a.exe - executable for Windows
    2. a.out - executable for MacOS
4. running the executable 
    1. ./a.out - command to run an executable on MacOS
    2. .\a.exe or .\a or ./a or a - command to run an executable on Windows
*/