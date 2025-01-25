#include <iostream> // is for the compiler to recognize the std out and std in commands

int main()
{
    int favorite_number; // defined an integer variable 

    // std::cout will send and output to the terminal
    std::cout << "Enter your favorite number between 1 and 100: ";

    // std::cin will take input from the terminal/user
    std::cin >> favorite_number;

    std::cout << "Amazing!! That's my favorite numer too!" << std::endl;

    return 0;
}