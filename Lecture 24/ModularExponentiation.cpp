#include <iostream>
using namespace std;

int modularExponentiation(int x, int n, int m) {

    int res = 1;

    while (n > 0) {

        // If current bit of n is 1 (odd number)
        if (n & 1) {

            // Multiply answer by current x
            res = (1LL * res * x % m) % m;
        }

        // Square x for next bit
        x = (1LL * x % m * x % m) % m;

        // Move to next bit of n
        n = n >> 1;
    }

    return res;
}