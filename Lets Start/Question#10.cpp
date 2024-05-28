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

//------------------------------------------------------------------------------------

// Code 02
// Another way of finding Prime Number
#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number to check if it's prime: ";
    cin >> number;
    
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    
    return 0;
}

//X----------------------X-------------------------X---------------------------X
// To run specific code, Firstly comment out the other code block.
