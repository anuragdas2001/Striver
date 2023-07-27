#include <bits/stdc++.h>
using namespace std;
void permute(int ind,vector<int> &arr,vector<vector<int>> &ans){

    if(ind>=arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=ind;i<arr.size();i++){
        swap(arr[i],arr[ind]);
        permute(ind+1,arr,ans);
        swap(arr[i],arr[ind]);
        

    }

}
int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    vector<vector<int>> ans;
    permute(0,arr,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}