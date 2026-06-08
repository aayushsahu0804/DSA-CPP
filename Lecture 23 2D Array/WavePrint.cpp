// https://bit.ly/329Le3K

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;

    for(int col = 0; col < mCols; col++)
    {
        if(col & 1)
        {
            // Odd index column -> Bottom to Top
            for(int row = nRows - 1; row >= 0; row--)
            {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // Even index column -> Top to Bottom
            for(int row = 0; row < nRows; row++)
            {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }

    return ans;
}

int main()
{
    int nRows, mCols;
    cin >> nRows >> mCols;

    vector<vector<int>> arr(nRows, vector<int>(mCols));
    for(int i = 0; i < nRows; i++)
    {
        for(int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> ans = wavePrint(arr, nRows, mCols);
    for(int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}