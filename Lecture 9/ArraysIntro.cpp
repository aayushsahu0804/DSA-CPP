#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
        cout << "Printing the Array:" << endl;
       //print the array 
       for(int i=0; i<size; i++)
       {
           cout << arr[i] << " ";
       }
        cout << endl;
       cout << "Printing Done"; 
       cout << endl;
}

int main() {    
    int number[15];
    
    //Accessing an Array
    cout << "Value at 1 index " << number[1] << endl;
    
       // cout << "Value at 20 index " << number[20] << endl;
       
       //Initialising an Array
       int second[3] = {5, 7, 11};
       
       //accessing an element 
       cout << "Value at 2 index " << second[2] << endl;
       
       int third[15] = {2, 7};
       int n = 15;
      // printArray(third, 15);
       int thirdSize = sizeof(third)/sizeof(int);
       cout << "Size of Third is " << thirdSize << endl;
       
       //Initialising all locations with zero
      int fourth[10] = {0};
       n = 10;
      // printArray(fourth, 10);
       
       //Initialising all locations with 1 [Not possible with below line]
       int fifth[10] = {1};
       n = 10;
      // printArray(fifth, 10);
       int fifthSize = sizeof(fifth)/sizeof(int);
       cout << "Size of fifth is " << fifthSize << endl;
       
       char ch[5] = {'a', 'b', 'c', 'r', 'p'};
       cout << ch[3] << endl;
        cout << "Printing the Array:" << endl;
       //print the array 
       for(int i=0; i<5; i++)
       {
           cout << ch[i] << " ";
       }
        cout << endl;
       cout << "Printing Done" << endl; 
       
       double firstDouble[5];
       float firstFloat[6];
       bool firstBool[9];
       
    
    cout << "Everything is fine" << endl;
    return 0;
}