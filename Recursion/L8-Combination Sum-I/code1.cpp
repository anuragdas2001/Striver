
#include <bits/stdc++.h>
using namespace std;
void CombSum(int ind,int target,vector<int> arr,vector<int> &res,vector<vector<int>> &ans){

        if(ind>=arr.size())
        {
            if(target==0)
            {
                ans.push_back(res);
                
            }
            return;
        }

        if(arr[ind]<=target)
        {
        res.push_back(arr[ind]);
        CombSum(ind,target-arr[ind],arr,res,ans);
        res.pop_back();
        }
        CombSum(ind+1,target,arr,res,ans);


}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(7);
    vector<int> res;
    vector<vector<int>> ans;
    int target=3;
    CombSum(0,9,arr,res,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}