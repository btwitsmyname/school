#include <iostream>
using namespace std;
int main()
{
    int ex[3][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12}};
    for (int x=0;x<3;x++)
        for (int y=0;y<4;y++)
            cout << ex[x][y] << " " << endl;
    return 0;
}
