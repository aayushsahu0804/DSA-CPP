//Leetcode 441 : Arranging Coins

#include <iostream>
using namespace std;

int arrangeCoins(int n) 
{
    int i = 1;
    while(n >= i)
    {   
        n -= i;
        i++;
    }
    return i - 1;
}