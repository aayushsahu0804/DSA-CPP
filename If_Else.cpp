#include<iostream>
using namespace std;
int main()
{
    //int a, b;
    //cin>>a >>b;
    //cout<<"Value of n is:" << n <<endl;
    //if a is positive
    /*if(a>0)
    {
        cout<<"A is positive" << endl;
    }
    else
    {
        cout<<"A is negative" << endl;
    }*/
    //cout<<"Value of A and B is: "<< a << '\t' << b << endl;
    //a= cin.get();
    //cout<<"Value of a is:"<< a << endl;
    char ch;
    cout<< "Enter a character:" << endl;
    cin>> ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"Uppercase"<<endl;
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<"Lowercase"<<endl;
    }
    else
    {
        cout<<"Numeric"<<endl;
    }
}