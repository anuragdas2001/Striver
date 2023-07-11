#include <bits/stdc++.h>
using namespace std;
void permutations(int ind,vector<int> vec,vector<int> &res,vector<vector<int>> &ans,map<int,int> &m){

    if(res.size()==vec.size())
    {
        ans.push_back(res);
        return;
    }
    for(int i=0;i<vec.size();i++)
    {
        if(m[vec[i]]==0)
        {
            m[vec[i]]=1;
            res.push_back(vec[i]);
            permutations(ind+1,vec,res,ans,m);
            res.pop_back();
            m[vec[i]]=0;
            // permutations(i+1,vec,res,ans,m);
            
        }
        

    }
}
int main(){
    int n=3;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    map<int,int> m;
    for(int i=0;i<vec.size();i++){
        m[vec[i]]=0;
    }
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" "<<m[vec[i]]<<endl;
    // }
    vector<int> res;
    vector<vector<int>> ans;
    permutations(0,vec,res,ans,m);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

}