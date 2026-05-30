#include<iostream>
using namespace std;

//1 -> Prime
//0 -> Not Prime
bool isPrime(int n)
{
    if(n <= 1)
    {
        return 0;
    }
    for(int i = 2; i < n; i++)
    {   //If n is divisible by any number between 2 and n-1, then it is not prime
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPrime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    return 0;

}    