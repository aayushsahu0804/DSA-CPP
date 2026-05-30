#include<iostream>
using namespace std;
//https://bit.ly/3y01Zdu

int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
    //Write your code here
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int size = sizeof(arr)/sizeof(int);
    cout<<findUnique(arr, size)<<endl;
}