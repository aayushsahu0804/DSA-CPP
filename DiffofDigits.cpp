#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int temp;
    temp=n;
    int digit;
    int prod=1;
    int sum=0;
    while(temp!=0)
    {
        digit=temp%10;
        temp/=10;
        prod*=digit;
        sum+=digit;
    }
    int difference=prod-sum;
    cout<<"difference:"<< difference << endl;
}