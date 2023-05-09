//print name 5 times
#include <bits/stdc++.h>
using namespace std;
void f(int cnt,int n)
{
    if(cnt>n)
    return;
    
    cout<<"Anurag"<<endl;
    f(cnt+1,n);
}
int main()
{
    f(1,5);
}