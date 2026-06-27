//  https://bit.ly/32VA96H

#include<iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs)
{
    //base case
    if(nStairs < 0)
        return 0;
    
    if(nStairs == 0)
        return 1;
    
    //R.C
    int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}

int main() {
    long long nStairs;
    cin >> nStairs;

    cout << endl << endl << endl ;
    cout << countDistinctWayToClimbStair(nStairs) << endl;
    cout << endl << endl << endl ;

    return 0;
}