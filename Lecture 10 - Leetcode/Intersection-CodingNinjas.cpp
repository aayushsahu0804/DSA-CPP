//https://bit.ly/3Il0c7n
// LeetCode: 350 https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

#include <iostream> 
#include <vector>
using namespace std;

//https://bit.ly/3Il0c7n
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i = 0, j = 0;
	vector<int> ans;
	while(i<n && j<m)
	{
	    if(arr1[i] == arr2[j])
	    {
	        ans.push_back(arr1[i]);
	        i++;
	        j++;
	    }
	    else if(arr1[i] < arr2[j])
	    {
	        i++;
	    }
	    else
	    {
	        j++;
	    }
	}
	return ans;
	
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3, 6};
    vector<int> ans = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

//High Time Complexity Solution
/*vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	
	vector<int> ans;
	for(int i = 0; i<n; i++)
	{
	    int element = arr1[i];
	    for(int j=0; j<m; j++)
	    {
	        if(element < arr2[j])
	        {
	            break;
	        }
	        if(element == arr2[j])
	        {
	            ans.pushback(element);
	            arr2[j] = -1;
	            break;
	        }
	    }
	}
	return ans;
}*/