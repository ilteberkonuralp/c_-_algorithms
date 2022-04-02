#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[20]={4,8,15,16,23,42};
    cout << luckyNums[0];
    cout << luckyNums[2];
    luckyNums[0]=19;
    cout << luckyNums[0];
    luckyNums[6]=10;
    /*int luckNums[20];*/
    return 0;
}