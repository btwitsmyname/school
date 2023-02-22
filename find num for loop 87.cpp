#include <iostream>
using namespace std;
int search(int num[20])
{
    int i=87;
    for (int x=0;x<20;x++){
        cout << "looking at number " << x << "for number 87\n"; 
        if (num[x] == i)
            cout << "# " << x << " is number 87\n";
    }
    return 0;
}
int main()
{
    int num[20]={87,66,30,89,22,45,78,23,66,78,92,56,33,97,405,0,43,82,92,10};
    search (num);
    return 0;
}
