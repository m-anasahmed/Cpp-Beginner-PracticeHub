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
// A recursive C++ program to check 
// whether a given number is 
// palindrome or not
#include <iostream>
using namespace std;

// A function that returns true 
// only if num contains one
// digit
int oneDigit(int num)
{ 
	// Comparison operation is faster 
	// than division operation. 
	// So using following instead 
	// of "return num 
	return (num >= 0 && num < 10);
}

// A recursive function to find 
// out whether num is palindrome 
// or not. Initially, dupNum 
// contains address of a 
// copy of num.
bool isPalUtil(int num, int* dupNum)
{ 
	// Base case (needed for recursion 
	// termination): This statement 
	// mainly compares the first 
	// digit with the last digit
	if (oneDigit(num))
		return (num == (*dupNum) % 10);

	// This is the key line in this 
	// method. Note that all recursive 
	// calls have a separate copy of num, 
	// but they all share same copy of 
	// *dupNum. We divide num while
	// moving up the recursion tree
	if (!isPalUtil(num / 10, dupNum))
		return false;

	// The following statements are 
	// executed when we move up
	// the recursion call tree
	*dupNum /= 10;

	// At this point, if num%10 contains 
	// i'th digit from beginning, then 
	// (*dupNum)%10 contains i'th digit
	// from end
	return (num % 10 == (*dupNum) % 10);
}

// The main function that uses 
// recursive function isPalUtil() 
// to find out whether num is 
// palindrome or not
int isPal(int num)
{
	
	// Check if num is negative, 
	// make it positive
	if (num < 0){
	    num = -num;
	}

	// Create a separate copy of num, 
	// so that modifications made to 
	// address dupNum don't change 
	// the input number. 
	int* dupNum = new int(num); 

	return isPalUtil(num, dupNum);
}


int main()
{
    cout <<  "\t***** Palindrome Checker *****" << endl;
	int n ;
	cout << "Enter the number : ";
	cin >> n;
	isPal(n) ? cout << "Yes! Its a Palindrome." << endl 
			 : cout << "No! It is not a Paindrome." << endl;

	return 0;
}

//---------------------------------------------------------------------------------------------

// Code 04
// C++ implementation of the 
// above approach
#include <iostream>
using namespace std;

// Function to check palindrome
int palindromechecker( string st)
{
    // Calculating string length
    int len = st.length();
    
    // Traversing through the string 
	// upto half its length
	for (int i = 0; i < len / 2; i++){
	    // Comparing i th character from 
		// starting and len-i th character 
		// from end
		if(st[i] != st[len - i - 1]){
		    return false;
		}
	}
	
	// If the above loop doesn't return 
	// then it is palindrome
	return true;
}

int main()
{
    // Taking number as string
    string st;
    cout << " ****** PALINDROME CHECKER ****** " << endl;
    cout << "Enter the anything to check wheather it is palindrome or not : ";
    cin >> st;
    
    if (palindromechecker(st) == true){
        cout << st << " is a Palindrome." << endl;
    }else{
        cout << st << " is not a Palindrome." << endl;
    }
    
    return 0;
}

// X---------------------------------X-----------------------------------X--------------------------------X

// To run the specific code, Firstly comment out the code block.
// Must practice of above code.
