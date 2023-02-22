// headder
#include <iostream>
using namespace std;
// prototype
void area();
// function to find the area
void area()
{
  // double for decimal values
  double radius , area;
 // prompt for user input
  cout << "enter radius"
  // user input
  cin >> radius;
  // process
  area = 3.14 * radius * radius;
  // output
  cout << area;
}
// main program
int main()
{
  // calling function made
  area()
  return 0;
}

