// Code 01
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double principle,rate,time,ci;
    cout<<"Enter the principle amount: ";
    cin>>principle;
    cout<<"Enter the rate of interest: ";
    cin>>rate;
    cout<<"Enter the time period: ";
    cin>>time;

    // Calculate compound interest
    double A = principle * pow((1 + rate / 100), time);
    double CI = A - principle;

    cout << "Compound Interest : " << CI << endl;
    return 0;
}
