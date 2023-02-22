//header
#include <iostream>
using namespace std;
// prototype
void area();
void perimeter();
// area function
void area()
{
    // indication of what to use
    cout << "this finds the area\n";
    // define all variables
    double area,base,height;
    // gather user input
    cout << "what is the height?\n";
    cin >> height;
    cout << "what is the base?\n";
    cin >> base;
    // find the area
    area = (height * base) / 2;
    // output the results
    cout << "the area is " << area << endl;
}
// perimeter function
void perimeter()
{
    // indicate what to use
    cout << "this finds the perimeter\n";
    // define all variables
    double perimeter,a,b,c;
    // prompt user input
    cout << "what is the first side\n";
    cin >> a;
    cout << "what is the second side\n";
    cin >> b;
    cout << "what is the third side\n";
    cin >> c;
    // find the perimeter
    perimeter = a + b + c;
    // output the results
    cout << "The perimeter is " << perimeter << endl;
}
// main function
int main()
{
    // first function
    area();
    // second function
    perimeter();
    return 0;
}
