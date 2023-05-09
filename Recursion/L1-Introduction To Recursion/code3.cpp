#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void f(int n)
{
    if(cnt==n)
    return;

    cout<<cnt<<endl;
    cnt++;
    f(n);

}
int main()
{
    int n=3;
    f(n);
}