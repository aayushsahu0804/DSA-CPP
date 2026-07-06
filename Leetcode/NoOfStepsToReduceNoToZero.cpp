//Leetcode Problem: 1342. Number of Steps to Reduce a Number to Zero

#include<iostream>
using namespace std;

int numberOfSteps(int num) 
{
    int cnt = 0;
    while(num != 0)
    {
        if(num%2 == 0)
    {
        num = num/2;
        cnt++;
    }
    else
    {
        num = num - 1; 
        cnt++;
    }
    }
    return cnt;
}

int main()
{
    int num;
    cin >> num;

    cout << numberOfSteps(num) << endl;

    return 0;
}