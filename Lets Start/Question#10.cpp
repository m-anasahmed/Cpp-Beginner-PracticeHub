// Code 01
// C++ program to check if a number is prime
#include <iostream>
using namespace std;

// Function to check prime number
bool numberIsPrime(int num)
{
	// Corner case
	if (num <= 1){
	    return false;
	}
	// Check from 2 to n-1
	for (int i = 2; i <= num / 2; i++){
	    if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
    int num;
    cout << "Enter the number to check : ";
    cin >> num;
    
	numberIsPrime(num) ? cout << num << " is a Prime number.\n" 
	                   : cout << num << " is not a Prime number.\n";
	return 0;
}

