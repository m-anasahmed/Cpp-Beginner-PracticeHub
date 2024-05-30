// Code 01
// Checking number if it is a palindrome
#include<iostream>
using namespace std;

int main()
{
    int num, OriginalNum, ReverseNum = 0, remainder;
    
    cout << "Enter the number : ";
    cin >> num;
    
    // Store the original number
    OriginalNum = num; 
    
    // Algorithm for Reversing the number
    // by using the while loop
    while(num!=0)
    {
        remainder = num % 10;
        ReverseNum = ReverseNum * 10 + remainder;
        num /= 10;
    }
    
    // Checking if the original number and the reversed number are the same.
    if (OriginalNum == ReverseNum){
        cout << OriginalNum << " Yes! its a palindrome." << endl;
    } else {
        cout << OriginalNum << " No! its not a palindrome." << endl;
    }
    return 0;
}

/*
// Working of Code 01 for detailed understanding...

****** Initial Setup ******
Input Number: 1234321     // Input number provided by user.
Original Number: 1234321
Reversed Number: 0

****** Steps to Reverse the Number ******
We use a while loop to reverse the digits of the number. Here's how it works:

1. ==> Iteration 1
Current num: 1234321
// There is a difference between " % " and " / "
Last Digit: 1234321 % 10 = 1    // Here, We are saving the Remainder
Reversed Number: 0 * 10 + 1 = 1
Updated num: 1234321 / 10 = 123432    // Here, The number will be in point. 
                                      // So, We are saving the value which is before point
                                      // Because the type of num is "int"
                                      
2. ==> Iteration 2
Current num: 123432
Last Digit: 123432 % 10 = 2
Reversed Number: 1 * 10 + 2 = 12
Updated num: 123432 / 10 = 12343

3. ==> Iteration 3
Current num: 12343
Last Digit: 12343 % 10 = 3
Reversed Number: 12 * 10 + 3 = 123
Updated num: 12343 / 10 = 1234

4. ==> Iteration 4
Current num: 1234
Last Digit: 1234 % 10 = 4
Reversed Number: 123 * 10 + 4 = 1234
Updated num: 1234 / 10 = 123

5. ==> Iteration 5
Current num: 123
Last Digit: 123 % 10 = 3
Reversed Number: 1234 * 10 + 3 = 12343
Updated num: 123 / 10 = 12

6. ==> Iteration 6
Current num: 12
Last Digit: 12 % 10 = 2
Reversed Number: 12343 * 10 + 2 = 123432
Updated num: 12 / 10 = 1

7. ==> Iteration 7
Current num: 1
Last Digit: 1 % 10 = 1
Reversed Number: 123432 * 10 + 1 = 1234321
Updated num: 1 / 10 = 0

****** End of While Loop ******
The while loop terminates as num becomes 0.

Final Check  // By using if-else statements
Original Number: 1234321
Reversed Number: 1234321

Output : "1234321 Yes! its a palindromw"
*/

//--------------------------------------------------------------------------------------------------------

// Code 02
// Making a function to check Palindrome.
#include <iostream>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int num) {
    int reversedNum = 0, remainder;
    
    // Algorithm for reversing the number using a while loop
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num, originalNum;
    
    cout << "Enter a number: ";
    cin >> num;
    
    // Store the original number
    originalNum = num; 
    
    // Get the reversed number from function.
    int reversedNum = reverseNumber(num);
    
    // Checking if the original number and the reversed number are the same
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }
    
    return 0;
}

//-------------------------------------------------------------------------------------------------------

// Code 03
