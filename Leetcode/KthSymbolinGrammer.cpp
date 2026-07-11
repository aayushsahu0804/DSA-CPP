#include<iostream>
using namespace std;

int kthGrammar(int n, int k) 
{
        // Base case
        if (n == 1)
            return 0;

        int mid = 1 << (n - 2);

        // First half
        if (k <= mid)
            return kthGrammar(n - 1, k);

        // Second half
        else
            return !kthGrammar(n - 1, k - mid);
}

int main()
{
    int n = 4;
    int k = 5;
    cout << kthGrammar(n, k) << endl; // Output: 1
    return 0;
}