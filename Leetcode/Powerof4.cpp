// Leetcode 342 : Power of Four
#include <iostream>
using namespace std;

bool isPowerOfFour(int n) 
{
    if(n == 1)
    {
        return true;
    }
    if (n <= 0 || n % 4 != 0) {
        return false;
    }
    return isPowerOfFour(n/4);
}

int main() 
{
    int n;
    cin >> n;

    if (isPowerOfFour(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}