#include<iostream>
#include<vector>
using namespace std;

int findLucky(vector<int>& arr) 
{
    sort(arr.begin(), arr.end());

    int temp = arr[0];
    int count = 0;
    int ans = -1;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == temp)
        {
            count++;
        }

        // Group ended
        if(arr[i] != temp)
        {
            if(count == temp)
            {
                ans = max(ans, temp);
            }

            temp = arr[i];
            count = 1;
        }
    }

    // Check the LAST group
    if(count == temp)
    {
        ans = max(ans, temp);
    }

    return ans;
    }

int main()
{
    vector<int> arr = {2, 2, 3, 4};

    cout << findLucky(arr) << endl;

    return 0;
}