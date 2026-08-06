// Leetcode 3345 : Smallest Divisible Digital Product I

#include <iostream>
using namespace std;

int smallestNumber(int n, int t) 
{
    int temp = n;
    int prod = 1;
    while(n>0)
    {
        prod = prod * (n%10);
        n = n/10;
    }
    if(prod%t == 0)
    {
        return temp;
    }
    else
    {
        n = temp+1;
    }
    return smallestNumber(n, t);
}