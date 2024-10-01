// Azraf Hossain
// Lab 3
// 10.1.24

#include <iostream> // Required
#include <iomanip> // required for the loops
#include <string> // required so we can use the string variable

using namespace std; // required, shortens the cout statments


int main() // function where the code can run
{
    double input; // defining the variable that is used to see if the user wants to input a fruit and its respective sugar

    cout << "would you like to find out the sugar content of a fruit? (1 means yes, 2 means no) [1/2] " << endl; // prompting the user to ask them if they want to input their fruit and sugar
    cin >> input;

    while (input == 1) // while the user has selected "yes"

        { // IMPORTANT NOTE ***** SQUIGGLY BRACKET IS NEEDED FOR MULTIPLE LINES OF TEXT IN WHILE AND FOR LOOPS AND SUCH

        string name; // defining variables for THIS SPECIFIC instance of the code looping
        double sugar;

        cout << "What is the Name and the number of grams of sugar in one cup of your fruit?: " << endl; // asking the user the name and sugar number of their fruit
        cin >> name >> sugar;

        if (sugar < 10)
            cout << name << " LOW SUGAR CONTENT" << endl; // if sugar is lower than 10, this text prints out

        else if (10 <= sugar && sugar <= 14)
            cout << name << " MEDIUM SUGAR CONTENT" << endl; // if sugar is between 10 and 14, this text prints out

        else if (sugar > 14)
            cout << name << " HIGH SUGAR CONTENT" << endl; // if sugar is above 14, this text prints out
        
        cout << "would you like to find out the sugar content of a fruit? (1 means yes, 2 means no) [1/2] " << endl; // reprompting the user if they want to re-enter
        cin >> input;
        }

    if (input == 2) // if the user has selected "no", then the program ends
        cout << "Okay have a nice day!";

    else // if the user has inputted in an input other than 1 or 2, then the program also ends
        cout << "unrecognized input, please retry.";

    return 0; // this is required for all c++ programs to finish
}

/*
would you like to find out the sugar content of a fruit? (1 means yes, 2 means no) [1/2] 
1
What is the Name and the number of grams of sugar in one cup of your fruit?: 
banana
200
banana HIGH SUGAR CONTENT
would you like to find out the sugar content of a fruit? (1 means yes, 2 means no) [1/2] 
1
What is the Name and the number of grams of sugar in one cup of your fruit?: 
apple
13
apple MEDIUM SUGAR CONTENT
would you like to find out the sugar content of a fruit? (1 means yes, 2 means no) [1/2]
1
What is the Name and the number of grams of sugar in one cup of your fruit?:
orange
1
orange LOW SUGAR CONTENT
would you like to find out the sugar content of a fruit? (1 means yes, 2 means no) [1/2]
2
Okay have a nice day!

*****SECOND POSSIBLE OUTPUT*****

would you like to find out the sugar content of a fruit? (1 means yes, 2 means no) [1/2]
t78
unrecognized input, please retry.
*/