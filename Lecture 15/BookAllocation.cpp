// https://www.naukri.com/code360/problems/allocate-books_1090540?leftPanelTabValue=PROBLEM
// Leetcode 410

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m > n)
    {
        return -1;
    }
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e)
    {
        if(isPossible(arr, n , m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter number of books: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter number of students: ";
    cin >> m;
    cout << "Enter number of pages in each book: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Minimum number of pages allocated to a student is: " << findPages(arr, n, m) << endl;
    return 0;
}