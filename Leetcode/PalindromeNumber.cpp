#include <iostream>
using namespace std;

long long rev(int x)
{
    long long ans = 0;

    while(x != 0)
    {
        ans = ans * 10 + x % 10;
        x /= 10;
    }

    return ans;
    }

long long rev(int x)
{
    long long ans = 0;

    while(x != 0)
    {
        ans = ans * 10 + x % 10;
        x /= 10;
    }

    return ans;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if(x < 0)
    {
        cout << "The number is not a palindrome." << endl;
        return 0;
    }

    long long reversed = rev(x);

    if(reversed == x)
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;

    return 0;
}