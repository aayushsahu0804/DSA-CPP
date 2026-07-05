// Leetcode 326 

#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {

        // success base case
        if (n == 1) {
            return true;
        }

        // failure base case
        if (n <= 0 || n % 3 != 0) {
            return false;
        }

        // recursive call
        return isPowerOfThree(n / 3);
    }

    int main() {
        int n;
        cin >> n;

        if (isPowerOfThree(n)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        return 0;
    }