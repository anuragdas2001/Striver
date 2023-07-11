#include <bits/stdc++.h>
using namespace std;
    void Subsets(int ind,vector<int> nums,vector<int> &res,vector<vector<int>> &ans)
    {
            ans.push_back(res);
            for(int i=ind;i<nums.size();i++)
            {
                if(i>ind && nums[i]==nums[i-1]){
                     continue; 
                }
                   

                res.push_back(nums[i]);
                Subsets(i+1,nums,res,ans);
                res.pop_back();
            }

    }
int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(1);
    vector<int> res;
    vector<vector<int>> ans;
    Subsets(0,arr,res,ans);
    sort(res.begin(),res.end());

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}