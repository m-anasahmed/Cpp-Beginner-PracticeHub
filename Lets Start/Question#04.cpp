 // Question no 03
// Code 01
// C++ program to Swap Values by using third variable
#include <iostream>
using namespace std;

int main()
{
    int value1 = 10, value2 = 20, temp;
    cout << "\n\t***** Before Swaping *****" << endl;
    cout << "Value no 1 : " << value1 << endl;
    cout << "Value no 2 : " << value2 << endl;

    // Main Algorithm
    temp = value1;
    value1 = value2;
    value2 = temp;

    cout << "\n\t***** After Swaping *****" << endl;
    cout << "Value no 1 : " << value1 << endl;
    cout << "Value no 2 : " << value2 << endl;
	return 0;
}

 // Code 02
#include <iostream>
using namespace std;

int main()
{
    int value1 = 10, value2 = 20;
    cout << "\n\t***** Before Swaping *****" << endl;
    cout << "Value no 1 : " << value1 << endl;
    cout << "Value no 2 : " << value2 << endl;

    // Using different algorithm
    value2 = value1 + value2;
    value1 = value2 - value1;
    value2 = value2 - value1;

    cout << "\n\t***** After Swaping *****" << endl;
    cout << "Value no 1 : " << value1 << endl;
    cout << "Value no 2 : " << value2 << endl;
	return 0;
}

 // Code 03
 // Using built-in Swap Function.
#include <iostream>
using namespace std;

int main()
{
    int value1 = 10, 
        value2 = 360;
    cout << "\n\t***** Before Swaping *****" << endl;
    cout << "Value no 1 : " << value1 
        << "\nValue no 02 : " << value2 <<endl;

    // Here, We are using Swap Function
    swap(value1, value2);

    cout << "\n\t***** After Swaping *****" << endl;
    cout << "Value no 1 : " << value1 
        << "\nValue no 02 : " << value2 <<endl;
	return 0;
}

// If you run specific code, First comment out the other code.

// If you would like to explore these concepts in more detail, please refer to this link.
// "https://www.geeksforgeeks.org/cpp-program-to-swap-two-numbers/"
// If you are unable to understand the concept, I recommend watching the video provided in the link.
