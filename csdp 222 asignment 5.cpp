// header
#include <iostream>
#include <string>
using namespace std;
// prototype
void average();
// function
void average()
{
    // define all variables
    int avg,max,i,num,sum,numx;
    // find the max input
    cout << "what is the max input?\n";
    cin >> max;
    for (i=0; i<max; i++)
    {
    // gather the numbers to find the sum
    cout << "enter a number.\n";
    cin >> num;
    }
    // calculate the average
    sum=num+num;
    avg=sum/max;
    cout << "the average is \n" << avg << "\n";
}
// main function
int main()
{
    // call the function
    average();
    return 0;
}
