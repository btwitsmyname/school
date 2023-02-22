//use a characther array to ask the user to input their funn name and print it out on the screen
#include <iostream>
using namespace std;
int main()
{
    int x;
    char arr[100]={};
    cout << "enter a characther";
    cin.getline(arr,100);
    for (x=0;x<100;x++){
        cout << arr[x];
    }
    return 0;
}
