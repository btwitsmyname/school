#include <iostream>
using namespace std;
void search(int num[20])
{
    int x=405,i=0;
    bool found=false;
    while (i<20 && !found)
    {
        if (num[i]==x)
        {
            found = true;
            cout << "the # of 405 is " << i << endl;
        }
        i++;
    }
}
int main()
{
    int num[20]={87,66,30,89,22,45,78,23,66,78,92,56,33,97,405,0,43,82,92,10};
    search (num);
    return 0;
}
