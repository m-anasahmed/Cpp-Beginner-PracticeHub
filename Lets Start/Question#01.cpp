// Code 01
// The most commonly header file we use is Iostream
#include <iostream>
using namespace std;
int main() {
    cout << "Hello World" << endl;
    return 0;
}

// Code 02
// The "stdio.h" (C-style) header file is also frequently used in C++. 
#include <stdio.h>
int main() {
    printf("Hello World\n");
    return 0;
}

// Code 03
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << setw(15) << "Hello World" << endl; 
    // setw sets the width for the output
    return 0;
}

// Code 04
// Using wide characters with "wcout"
#include <iostream>
using namespace std;
int main() {
    wcout << L"Hello World" << endl;
    return 0;
}

// These examples illustrate different ways to print "Hello World" in C++, using various libraries and methods.
// To run the specific code, First comment out the other code.