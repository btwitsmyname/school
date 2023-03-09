#include <iostream>
using namespace std;
int main()
{
    const int size=8;
    int arr[size] = {5,10,15,20,25,30,35,40};
    int *ptr = nullptr;
    ptr = arr;
    cout << "{ ";
    while(ptr<=&arr[size-1])
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << "}\n";
    return 0;
}
