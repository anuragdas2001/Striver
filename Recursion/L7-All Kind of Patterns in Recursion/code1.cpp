// Printing Subsequences whose sum is K
 #include <bits/stdc++.h>
 using namespace std;
 void SubK(int ind,vector<int> arr,vector<int> &res,int K)
 {
    if(ind>=arr.size())
    {
        if(accumulate(res.begin(),res.end(),0)==K){

            for(auto &it:res){
                cout<<it<<" ";
            }
                cout<<endl;
        }
        return;
    }
    res.push_back(arr[ind]);
    SubK(ind+1,arr,res,K);
    res.pop_back();
    SubK(ind+1,arr,res,K);
    


 }
 int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    // arr.push_back(4);
    vector<int> res;
    SubK(0,arr,res,2);
 }