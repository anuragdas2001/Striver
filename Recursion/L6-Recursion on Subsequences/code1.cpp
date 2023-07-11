//Print all Subsequences
//Subsequence--> A Contiguous/non-contiguous sequences,which follows the order
//SubArray--> A SubArray is just Contiguous
//arr[3,1,2]
//[3]
//[1]
//[2]
//[3,1]
//[3,2]
//[1,2]
//[3,1,2]
#include <bits/stdc++.h>
using namespace std;
void Subsequence(int ind,vector<int> arr,vector<int> &vec){
    if(ind>=arr.size()){
        for(auto &i:vec)
            cout<<i<<" ";
            cout<<endl;
            return;
    }
       

        vec.push_back(arr[ind]);//take
        Subsequence(ind+1,arr,vec);
        vec.pop_back();//not take
        Subsequence(ind+1,arr,vec);
        
}
int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    vector<int> vec;
    Subsequence(0,arr,vec);
}