#include <iostream>

// sayHello.cpp
// Code warm up week 01
// dH 8/8/22

// Instructions: Understand every single key stroke of this program.
// Modify this program to get the user's answer to your greeting question and
// reply to the user with a nice message
// Advanced: create a decision control structure that processes user input and outputs a value depending on
// the input from the user.


using namespace std;

int main()
{
    cout << "Say Hello" << endl;

    string userInput;
    string userInput2;

    // Ask user for input, tell user to press enter
    cout << "Please enter your name: ";

    // Get user input from the keyboard
    cin >> userInput;

    // print six lines using a for loop!
    for (int i=0; i<=1; i++)
    {
        cout << endl;
    }

    cout << "Hello " << userInput << " how are you today>?";
    cin >> userInput2 << endl;
    if(userInput2 == "good" || userInput2 == "Good"){
	    cout << "Good to hear that.";
    }else cout << "Thank you for telling me how you are doing today." << endl;

    return 0;
}
