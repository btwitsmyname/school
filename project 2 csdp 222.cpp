/*
Brandon Wiggins
CSDP 222
Project 2
*/
#include <iostream>
using namespace std;

double sides(double side1, double side2, double side3)
{
    cout << "input 3 sides of a triabgle\n";
    cin >> side1;
    cin >> side2;
    cin >> side3;
    cout << "side 1 is " << side1 << "\nside 2 is " << side2 << "\nside 3 is " << side3 << endl;
    return side1;
}
int main()
{
    double side1, side2, side3;
    sides(side1,side2,side3);
    return 0;
}
