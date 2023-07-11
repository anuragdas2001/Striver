// i>ind -->checks for duplicate combinations


#include <bits/stdc++.h>
using namespace std;
void CombSum(int ind,int target,vector<int> arr,vector<int> &res,vector<vector<int>> &ans){
    if(target==0)
    {
        ans.push_back(res);
        return;
    }

    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind && arr[i]==arr[i-1])
            continue;

            if(arr[i]>target)
                break;

                res.push_back(arr[i]);
                CombSum(i+1,target-arr[i],arr,res,ans);
                res.pop_back();
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    vector<int> res;
    vector<vector<int>> ans;
    int target=3;
    CombSum(0,5,arr,res,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }




}