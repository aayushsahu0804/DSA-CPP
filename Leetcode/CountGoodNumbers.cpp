#include<iostream>
using namespace std;

const long long MOD = 1000000007;

    long long power(long long a, long long b) {

        // Base case
        if (b == 0)
            return 1;

        if (b == 1)
            return a;

        // Recursive call
        long long ans = power(a, b / 2);

        // If b is even
        if (b % 2 == 0) {
            return (ans * ans) % MOD;
        }

        // If b is odd
        else {
            return (a * ((ans * ans) % MOD)) % MOD;
        }
    }

    int countGoodNumbers(long long n) {

        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;

        long long evenWays = power(5, evenPositions);
        long long oddWays = power(4, oddPositions);

        return (evenWays * oddWays) % MOD;
    }