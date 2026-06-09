// Leetcode problem: 204. Count Primes

#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {

    // Count of prime numbers less than n
    int cnt = 0;

    // Initially assume every number is prime
    vector<bool> prime(n + 1, true);

    // 0 and 1 are not prime
    prime[0] = prime[1] = false;

    // Check every number from 2 to n-1
    for (int i = 2; i < n; i++) {

        // If still marked prime
        if (prime[i]) {

            // Found a prime number
            cnt++;

            // Mark all multiples of i as non-prime
            for (int j = 2 * i; j < n; j = j + i) {
                prime[j] = false;
            }
        }
    }

    return cnt;
}