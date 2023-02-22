/*
a function that inputs the students grades in one class whith an unknown student number
*/
#include <iostream>
using namespace std;
class students{
    public:
    double mynum;
};
int main(){
    double grades;
    cout << "enter a student grade. \n";
    cin >> grades;
    students myObj;
    myObj.mynum = grades;
    cout << myObj.mynum << endl;
    return 0;
}
