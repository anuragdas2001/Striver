//Sum Of First N elements
// Parameterised Way
#include <bits/stdc++.h>
using namespace std;
void PW(int ind,vector<int> &vec,int sum)
{
    if(ind>=vec.size()){
        cout<<sum<<endl;
         return;
    }
        PW(ind+1,vec,sum+vec[ind]);
}
// Functional Way  
int FW(int ind,vector<int> &vec)
{
    if(ind>=vec.size())
    return 0;

    return vec[ind]+FW(ind+1,vec);
}
int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(3);
    PW(0,vec,0);
    cout<<FW(0,vec);
}