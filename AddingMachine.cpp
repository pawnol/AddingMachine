/*
Adding Machine
Pawelski
4/8/2021
This program asks the user to enter two numbers and then reprots the sum.
You need to modify the program to use a do while loop instead of a while loop.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    string repeat = "Y";
    while (repeat == "Y")
    {
        cout << "Enter a number >> ";
        cin >> num1;
        cout << "Enter another number >> ";
        cin >> num2;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
        cout << "Would you like to enter another set of numbers? (Y/N) >> ";
        cin >> repeat;
        cout << "\n";
    }
    return 0;
}
