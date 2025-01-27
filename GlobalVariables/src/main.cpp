#include <iostream>

using namespace std;

// int age {18}; // this is a global variable. It is accessible throughout the entire program

int main(){
    int age {18}; // this is a local variable. It is only accessible within this function.

    cout << age << endl;

    return 0;
}