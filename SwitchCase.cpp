#include<iostream>
using namespace std;
int main()
{
    char ch = '1';
    int num = 1;
    cout << endl; 
    switch(ch)
    {
        case 1:
            cout<<"num is 1"<<endl;
            break;
        case '1': switch(num)
        {
            case 1: 
                cout<<"Value of num is "<< num <<endl;
                break;
            case 2:
                cout<<"num is 2"<<endl;
                break;
        }
            break;
        case 3:
            cout<<"num is 3"<<endl;
            break;
        default:
            cout<<"num is not 1,2 or 3"<<endl;
    }
}