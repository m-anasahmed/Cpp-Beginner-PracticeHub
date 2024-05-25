// Code 1
// Simple Code
// Making the logic in main function.
#include <iostream>
using namespace std;
int main() {
   int num;
   cout << "Enter the number : ";
   cin >> num;
  // If the condition is true the number will be even,
  // otherwise it will run else.
   if(num % 2 == 0){
       cout << num <<" is Even number." << endl;
   }
   else{
       cout << num <<" is Odd number." << endl;
   }
    return 0;
}


// Code 2
// Making both logic for even and odd in main function.
#include <iostream>
using namespace std;

int main() {
   int num;
   cout << "Enter the number : ";
   cin >> num;
  // Logic for Even.
   if(num % 2 == 0)
   {
       cout << num <<" is Even number." << endl;
   }
  // Logic for Odd.
   else if(num % 2 == 1)
   {
       cout << num <<" is Odd number." << endl;
   }
    return 0;
}

// Code 03
// Making different function to check if it is even or odd number.
#include <iostream> 
using namespace std; 

// Returns true if num is even
bool numIsEven(int num) { return (num % 2 == 0); } 
// Returns true if num is odd
bool numIsOdd(int num) { return (num % 2 == 1); }

int main() 
{ 
	int num;
	cout << "Enter the number : ";
	cin >> num;
	if (numIsEven(num)) 
	{
	    cout << num << " is Even number." << endl;
	}
	else if (numIsOdd(num))
	{
	    cout << num << " is Odd number." << endl;
	} 
	return 0; 
}

// If you want to run specific code, First comment out the other code block.
