#include <bits/stdc++.h>
using namespace std;
void SubSum(int ind,int sum,vector<int> arr,vector<int> &res){

    if(ind>=arr.size()){
        res.push_back(sum);
        return;
    }
        

    sum+=arr[ind];
    SubSum(ind+1,sum,arr,res);
    sum-=arr[ind];
    SubSum(ind+1,sum,arr,res);


}
int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(1);
    vector<int> res;
    // vector<vector<int>> ans;
    SubSum(0,0,arr,res);
    sort(res.begin(),res.end());
    for(auto &i:res)
    {
        cout<<i<<" ";
    }
}