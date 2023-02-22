/*Brandon Wiggins
13061006*/
#include <iostream>
using namespace std;
// bool functiion
bool testing(int a,int b,int c)
{
    bool sides,bottom,result;
	// comparing sides
    if (a==b)
        sides = true;
    if (b==c)
        bottom = true;
    // comparing sides to bottom
    if (sides==true & bottom==true)
        result = true;
	// output result
    cout << result;
    return result;
}
int main()
{
    // declare all variables
    int a,b,c;
    // gather user input
    cout << "input sides \n";
    cin >> a >> b >> c;
	calling function
    testing(a,b,c);
    return 0;
}
