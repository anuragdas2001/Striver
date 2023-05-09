//print from N to 1 (By Backtrack)
// dont use cnt-1
#include <bits/stdc++.h>
using namespace std;
void f(int cnt,int n)
{
    if(cnt>n)
    return;

    f(cnt+1,n);
    cout<<cnt<<endl;

}
int main()
{
    f(1,10);
}