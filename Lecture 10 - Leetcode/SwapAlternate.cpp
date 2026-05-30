#include <iostream>
using namespace std;

void alternate(int arr[], int size)
{
/*int first=0;
    int second=1;
    while(first<size-1 && second<size)
    {
        swap(arr[first], arr[second]);
        first += 2;
        second += 2;
    }*/
    for(int i=0; i<size-1; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};
    
    alternate(arr, 6);
    alternate(brr, 5);
    
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}