//Reverse an Array
#include <bits/stdc++.h>
using namespace std;
void reverse(int i,int j,vector<int> &vec)
{
    if(vec.size()==1 || i==j)
        return;

    
        swap(vec[i],vec[j]);
    
    reverse(i+1,j-1,vec);
}
//Using Single Variable
void rev(int i,vector<int> &vec,int n)
{
    if(vec.size()==1 || i>=n/2)
        return;

        swap(vec[i],vec[n-i-1]);
        rev(i+1,vec,n);
}
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(4);
    int i=0;
    int j=vec.size()-1;
    reverse(i,j,vec);
    for(auto &v:vec)
        cout<<v<<" ";
    rev(0,vec,vec.size());
    rev(0,vec,vec.size());
    cout<<endl;
    for(auto &v:vec)
        cout<<v<<" ";
}