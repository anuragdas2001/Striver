//print linearly from 1 to N (By Backtrack)
// dont use cnt+1
#include <bits/stdc++.h>
using namespace std;
void f(int cnt){
    if(cnt<1)
    return;

    f(cnt-1);
    cout<<cnt<<endl;
}
int main()
{
    f(10);
}