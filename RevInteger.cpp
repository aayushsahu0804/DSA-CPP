#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int rev=0;
    int digit;
    while(n!=0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n/=10;
        if((rev>INT_MAX/10)||(rev<INT_MIN/10))
        {
            return 0;
        }
    }
    cout<<rev;
}