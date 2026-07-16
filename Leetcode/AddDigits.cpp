// Leetcode 258 : Add Digits

#include <iostream>
using namespace std;

int addDigits(int num) 
{
    if(num < 10)
    {
        return num;
    }
    int sum = 0;
    while(num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return addDigits(sum);
}