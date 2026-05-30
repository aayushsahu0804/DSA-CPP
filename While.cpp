#include<iostream>
using namespace std;
int main()
{
    /*int n;
    int i=2;
    int sum=0;
    cout<<"Enter a number:"<<endl;
    cin>> n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"Value of sum is:"<< sum << endl;
    return 0;*/
    float celcius=0;
    float faren;
    float cel;
    cout<<"Enter a temperature in cel:"<<endl;
    cin>> cel;
    cout<<"Celcius"<<'\t' << "Farenheit"<<endl;
    while(celcius<=cel)
    {
        faren=(celcius*(9/5))+32;
        cout<<celcius<<'\t'<<faren<<endl;
        celcius = celcius + 4;
    }
}