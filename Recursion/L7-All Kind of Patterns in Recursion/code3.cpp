// Count the Subsequences with sum K
#include <bits/stdc++.h>
 using namespace std;
int CntSub(int ind,vector<int> arr,int K,int sum)
{
    
   if(ind>=arr.size())
    {
        if(sum==K)
        {
            return 1;
        }
        return 0;
    }
    sum+=arr[ind];
    int l=CntSub(ind+1,arr,K,sum);
    sum-=arr[ind];
    int r=CntSub(ind+1,arr,K,sum);
    return l+r;
}
 int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    vector<int> res;
    cout<<CntSub(0,arr,6,0);
 }