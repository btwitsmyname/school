#include <iostream>
using namespace std;
int main()
{
    int num1=5;
    cout << &num1 << endl;
    int *ptr=nullptr;
    ptr=&num1;
    cout <<ptr<<endl;
    return 0;
}
