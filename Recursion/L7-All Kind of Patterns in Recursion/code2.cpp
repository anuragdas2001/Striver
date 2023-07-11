// Modification-->Print any Subsequence whose sum is K
// [1,2,1] k=2
// [1,1]
#include <bits/stdc++.h>
using namespace std;
bool SubK2(int ind,vector<int> arr,vector<int> &res,int K)
{
     if(ind>=arr.size())
    {
        if(accumulate(res.begin(),res.end(),0)==K)
        {
            for(auto &it:res)
            {
                cout<<it<<" ";
                
            }
            cout<<endl;
            return true;
        }
        return false;
    }
     //pick
    res.push_back(arr[ind]);
    if(SubK2(ind+1,arr,res,K)==true)
        return true;
    //not pick
    res.pop_back();
    if(SubK2(ind+1,arr,res,K)==true)
        return true;

        return false;
}
void SubK(int ind,vector<int> arr,vector<int> &res,int K)
{
    if(ind>=arr.size())
    {
        if(res.size()>1 && accumulate(res.begin(),res.end(),0)==K)
        {
            for(auto &it:res)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    // pick
    res.push_back(arr[ind]);
    SubK(ind+1,arr,res,K);
    //not pick
    res.pop_back();
    SubK(ind+1,arr,res,K);


}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    vector<int> res;
    SubK(0,arr,res,2);
    SubK2(0,arr,res,2);

}