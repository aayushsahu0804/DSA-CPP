#include<iostream>
using namespace std;
int main()
{
    /*for(int i=0; i<=5; i++)
    {
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;
        cout<<"Reply to karde"<<endl;
    }*/
   for(int i=0; i<5; i++)
   {
        for(int j=i; j<=5; j++)
        {
            if(i+j==10)
            {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
   }
    /*cout<<i<<" ";
        if(i&1)
        {
            continue;
        }
        i++;*/
}
