/*
Brandon Wiggins
1306106
*/
/*
make a cpp program
five students in the test lab course
use functions to input the final grade
if students grades is not less than course avg they qualify for honor cert
ouput the number of students who got honors
*/
#include <iostream>
using namespace std;
bool quali(bool qual)
{
    // make a loop for five inputs for different variables
    // declare variables
    int i;
    double s1,s2,s3,s4,s5,grades,avg;
        cout << "S1 enter grade. " << endl;
        cin >> s1;
        if (grades >= 100)
            cout << "grade input error, please restart and try again. ";  
        if (grades <= 0)
            cout << "grade input error, please restart and try again. ";
        cout << "S2 enter grade. " << endl;
        cin >> s2;
        if (grades >= 100)
            cout << "grade input error, please restart and try again. ";  
        if (grades <= 0)
            cout << "grade input error, please restart and try again. ";
        cout << "S3 enter grade. " << endl;
        cin >> s3;
        if (grades >= 100)
            cout << "grade input error, please restart and try again. ";  
        if (grades <= 0)
            cout << "grade input error, please restart and try again. ";
        cout << "S4 enter grade. " << endl;
        cin >> s4;
        if (grades >= 100)
            cout << "grade input error, please restart and try again. ";  
        if (grades <= 0)
            cout << "grade input error, please restart and try again. ";        cout << "S5 enter grade. " << endl;
        cin >> s5;
        if (grades >= 100)
            cout << "grade input error, please restart and try again. ";  
        if (grades <= 0)
            cout << "grade input error, please restart and try again. ";
    // find the avg
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    if (s1 >= avg)
        qual == true;
    else 
        qual == false;
    if (s2 >= avg)
        qual == true;
    else 
        qual == false;
    if (s3 >= avg)
        qual == true;
    else 
        qual == false;
    if (s4 >= avg)
        qual == true;
    else 
        qual == false;
    if (s5 >= avg)
        qual == true;
    else 
        qual == false;
    return qual;
}
int main()
{
    int honors,count;
    bool qual;
    // gather qual data and add it to count number of qualifiers
    honors = count;
    cout << "the number of honor students is " << honors << endl;
    // output the number of honor students
    return 0;
}

