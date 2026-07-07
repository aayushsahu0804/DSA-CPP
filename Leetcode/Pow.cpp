//Leetcode 50

#include<iostream>
using namespace std;

double power(double x, long long n)
    {
        // Base case
        if(n == 0)
            return 1;

        if(n == 1)
            return x;

        // Recursive call
        double ans = power(x, n / 2);

        // If n is even
        if(n % 2 == 0)
        {
            return ans * ans;
        }
        // If n is odd
        else
        {
            return x * ans * ans;
        }
    }

    double myPow(double x, int n)
    {
        long long N = n;

        // Handle negative exponent
        if(N < 0)
        {
            x = 1 / x;
            N = -N;
        }

        return power(x, N);
    }

int main()
{
    double x;
    int n;
    cin >> x >> n;

    cout << myPow(x, n) << endl;

    return 0;
}