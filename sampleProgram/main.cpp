#include <iostream> // is for the compiler to recognize the std out and std in commands

int main()
{
    
    // note: int, std cout, std cin, std endl are all known as identifiers
    // note: << is an insertion operator
    // note: >> is an extraction operator,takes terminal input and stores it into variables
    int favorite_number; // declared an integer variable 

    // std::cout will send and output to the terminal
    std::cout << "Enter your favorite number between 1 and 100: ";

    // std::cin will take input from the terminal/user
    std::cin >> favorite_number;

    std::cout << "Amazing!! That's my favorite numer too!" << std::endl;

    return 0;
}

//the c++ preprocessor is a program that processes your source code before
// the compiler sees it. The preprocessor strips all the comments from your
// source code and replaces each comment with a single space, then it looks 
// for preprocessor directives and executes them.
// Preprocessor directives are lines in the source code that begin with a pound symbol
// the most commonly used preprocessor directive is the include directive.
//When the preprocessor sees this directive,
//it replaces the pound include line
//with the file that it's referring to
//that it recursively processes that file as well.
//So by the time the compiler sees the source code,
//all comments are stripped out and all preprocessor directives have been
//processed and removed.
//Preprocessor directives have commonly used to conditionally compile code.
//For example, suppose you only want to compile a portion of your source code
//if you're on the windows operating system.
//In this case, you would use a pre-processor directive
//to test to see if you are on windows
//and then perhaps includes some windows-specific libraries.
//or use the error directive to abort the compile with an error message.
//***** REMINDER:THE C++ PREPROCESSOR DOES NOT UNDERSTAND C++
//It simply follows the preprocessor directives and gets the source code
//ready for the compiler.
//-----------------------------------------------------------------------------------
// The following is a list of preprocessor directives:
//   #include <iostream>
//   #include "myfile.h"
//   #if
//   #elif
//   #else
//   #else
//   #endif
//   #ifdef
//   #ifndef
//   #define 
//   #undef
//   #line
//   #error
//   #pragma
