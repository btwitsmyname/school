/*
declare an integer array with 10 elements
set function to get input
set function to display out put
*/
// headder
#include <iostream>
using namespace std;
int input(int arr[10],int i);
int output(int arr[10],int i);
// input array
int input(int arr[10],int i)
{
    // loop the input process
    for (i=0;i<10;i++){
        // gather input
        cout << "enter a number into the array\n";
        cin >> arr[i];
    }
    // return the array back to main
    return arr[10];
}
// output array
int output(int arr[10],int i)
{
    // output the numbers input to the array
    cout << "your numbers are\n";
    // loop the output process
    for (i=0;i<10;i++){
        cout << arr[i] << endl;
    }
}
// main function
int main()
{
    declare variables
    int arr[10]={},i;
    // call input function
    input(arr,i);
    // call output function
    output(arr,i);
    return 0;
}
