// https://bit.ly/3pvCTz9 

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i < n; i++)
    {
        bool swapped = false;
        //for round 1 to n-1
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            // No swapping means the array is already sorted
            break;
        }
    }
}

int main()
{
    vector<int> arr = {5, 1, 4, 2, 8};
    int n = arr.size();
    
    bubbleSort(arr, n);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}