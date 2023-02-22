#include <iostream>
using namespace std;

// Prototype(s)
void absoulte(); 

// Function(s)
void absolute()
{
    // variables
    int num;
    // prompt user input
    cout << "enter integer";
    // gather user input
    cin >> num;
    // if condition above 0
    if (num>=0);
        cout << num;
    // if condition below 0
    else (num<0);
        // correction for absolute value
        cout << num * (-1);
}
int main()
{
    // call function
    absolute();
    return 0;
}
