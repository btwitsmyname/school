/*
Brandon
*/
#include <iostream>
#include <random>
using namespace std;
// output the array average
void output1(int average)
    {cout << "the average of the array is \n" << average << endl;}
// output the minimum
void output2(int minimum)
    {cout << "the min is :" << minimum << endl;}
// output the maximum
void output3(int maximum)
    {cout << "the max is :" << maximum << endl;}
int main()
{
    // call all variables
    int avg,sum,n,num,min,max,arr[5][5],minimum,maximum;
    // set min max
    min=1000;
    max=9999;
    // gen random number
    num=min+rand()%(max-min+1);
    // input number to array
    for (int a=0;a<5;a++){
        for (int b=0;b<5;b++){
            arr[a][b]=num;
        }
    }
    // calculate average
    for (int x=0;x<5;++x)
    {
    sum+= arr[x][x];
    }
    double average=sum/5;
    // call function to output
    output1(average);
    // find max and min
    for (int c=0;c<5;c++){
        for (int d=0;c<5;c++){
            if (arr[c][d]>maximum){
                maximum = arr[c][d];}
            if (arr[c][d]>minimum){
                minimum = arr[c][d];}
        }
    }
    // call function to output
    output2(minimum);
    output3(maximum);
    return 0;
}
