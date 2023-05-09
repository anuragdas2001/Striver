//print linearly form 1 to N 
#include<bits/stdc++.h>
using namespace std;
void f(int cnt,int n)
{
    if(cnt>n)
        return;


    cout<<cnt<<endl;
    f(cnt+1,n);
    
    

}
int main()
{
    f(1,10);

}