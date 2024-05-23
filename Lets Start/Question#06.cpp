/* 6.	Write a Program to Find Compound Interest. In this problem, you have to write a program that calculates and prints the compound interest for the given Principle, Rate of Interest, and Time.
For Example,
Principle = 25000 
Rate = 12%
Time = 5 Years
 */

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
}