// Code 01
// To check if a given year
// is a leap year or not
#include<iostream>
using namespace std;

// Function to check leap year
bool checkleapyear(int year)
{
    // This is main algorithm 
    // for checking leap year.
    if (year % 400 == 0){
        return true;
    }
    // not a leap year if divisible by 100
	// but not divisible by 400
    else if (year % 100 == 0){
        return false;
    }
    // leap year if not divisible by 100
	// but divisible by 4
    else if (year % 4 == 0){
        return true;
    }
    // all other years are not leap years
    else{
        return false;
    }
}

int main()
{
    int year;
    cout << "Enter the year to check : ";
    cin >> year;
    
    // Function will return bool value i.e true or false
    // If its true, The first cout statemnet will run 
    // Otherwise if its false, The second cout statement will run.
    checkleapyear(year) ? cout << year << " is a Leap year."
                    : cout << year << " is not a Leap year." << endl;
    
    return 0;
}

//---------------------------------------------------------------------

// Code 02
// Professional way of using if-else.
#include <iostream>
using namespace std;

bool checkleapyear(int year)
{
    // Leap year is divisible by 4
    // If divisible by 100, it should also be divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    checkleapyear(year) ? cout << year << " is a Leap year."
                    : cout << year << " is not a Leap year." << endl;

    return 0;
}

//X---------------------------X-------------------------X-------------------------------X
