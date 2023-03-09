#include <iostream>
using namespace std;
int main()
{
    // array being used
    int arr[2][12]={{47,50,51,58,61,68,71,77,82,85,87,89}
                    ,{3,2,3,4,3,3,3,3,3,3,4,4}};
    // define all variables
    int x,y;
    // binary search to find 87
    for (x=0;x<2;x++){
        for (y=0;y<12;y++){
            if (arr[x][y]==87);
        }
    }
    // output 87 and rain amount
    cout << "Target found adv. rain is " << arr[2][y] << endl;
    return 0;
}
