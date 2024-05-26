// Code 01
// Simple Code to find Largest number.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter the number :" << endl;
    cin >> num1 >> num2 >> num3;
    
    // Logic to find greatest number
    if (num1 > num2) {
        cout << num1 << " is the largest number." << endl;
    }
    else if (num2 > num3)
    {
        cout << num2 << " is the largest number." << endl;
    }
    else{
        cout << num3 << " is the largest number." << endl;
    }
    return 0;
}

// Code 02
// using If-else condition in different way
// to find largest number.
// Practice of this code again and again to 
// understand the concept of if-else and logic building.
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter the three numbers : " << endl;
	cin >> num1 >> num2 >> num3;
	
	if (num1 >= num2){
	    // If 'num1' is greater than or equal to 'num2', compare
		// 'num1' with 'num3'
	    if (num1 >= num3){
	        // If 'num1' is also greater than or equal to 'num3',
			// it is the largest number
			cout << "The greatest number is : " << num1 << endl;
	    }
	    else{
	        // If 'num1' is not greater than or equal to 'num3',
			// 'num3' must be the largest number.
			cout << "The greatest number is : " << num3 << endl;
	    }
	}
	else {
	    // If 'num2' is greater than 'num1', compare 'num2' with 'num3'
	    if (num2 >= num3){
	        // If 'num2' is also greater than or equal to 'num3',
			// it is the largest number
			cout << "The greatest number is : " << num2 << endl;
	    }
	    else{
	        // If 'num2' is not greater than or equal to num3,
			// 'num3' must be the largest number
			cout << "The greatest number is : " << num3 << endl;
	    }
	}
	return 0;
}

// Code 03
