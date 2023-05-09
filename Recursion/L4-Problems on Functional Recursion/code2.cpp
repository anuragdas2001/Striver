// check if a string is pallindrome or not (Functional)
#include <bits/stdc++.h>
using namespace std;
bool check(int i,int j,string  &s)
{
    if(i>=j)
        return true;

    if(s[i]!=s[j])
        return false;


      return check(i+1,j-1,s);

}
//Using Single Variable
bool check2(int i,string s)
{   
    int n=s.size();
    if(i>=n/2)
        return true;

    if(s[i]!=s[n-i-1])
        return false;

        return check2(i+1,s);
}
int main()
{
    
    string s;
    cin>>s;

    if(check(0,s.size()-1,s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    if(check2(0,s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}