// Leetcode - 1833 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
        int count =0 , temp=0;
        int l=costs.size()-1;

        //sorting the costs array 
        sort(costs.begin(),costs.end());

        //if the cost of the ice bar is more then the coin
        if(costs[0]>coins){
            return 0;
        }

        //Trasversing the cost array
        for(int i=0;i<costs.size();i++){
            if(temp<coins && costs[i]<=coins){
                temp=temp+costs[i];
                if(temp<=coins){
                    count++;
                }
                if(temp>coins){
                    break;
                }
            }
        }
        return count;
    }

int main(){
    int n, coins;
    cin>>n>>coins;
    vector<int> costs(n);
    for(int i=0;i<n;i++){
        cin>>costs[i];
    }
    cout<<maxIceCream(costs, coins)<<endl;
    return 0;
}