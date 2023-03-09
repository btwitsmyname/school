#include <iostream>
using namespace std;
// 2 functions to accept pointer
//one function to get a test score
//one function to get new test score in finals
void get_score(double *score)
{
    do{
        cout << "enter score\n";
        cin >> *score;
    }while(*score<0);
}
void calculate(double *score)
{
    *score*=0.2;
}
int main()
{
    double score;
    get_score(&score);
    calculate (&score);
    cout << "your test score in finals is: " << score << endl;
    return 0;
}
