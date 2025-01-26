#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main(){

    // we could declare the variables at the top but it is recommended
    // to initialize variables right before you use them.
    // int room_width {0};
    // int room_length {0};

    cout << "Enter the width fo the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the length fo the room: ";
    int room_length {0};
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

    return 0;
}

// ---------------------------------------------------------------------------
// INTIALIZING VARIABLES
// int age;             // uninitialized
// int age = 21;         // C-like initialization
// int age (21);          // Contructor intialization
// int age {21};          // C++11 list intialization syntax
// ------------------------------------------------------------------------------


