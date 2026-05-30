#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the Function" <<endl;
    
    //Updating Array's first element
    arr[0] = 120;
       //Printing the Array
    for(int i=0; i<3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    cout << "Going back to main function" << endl;
}

int main()
{  
    int arr[3] = {1, 3, 5};

    update(arr, 3);
    
    //Printing the Array
    for(int i=0; i<3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}