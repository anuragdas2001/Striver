#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void f()
{
    cout<<cnt<<endl;
    cnt++;
    f();
}
int main()
{
    f();
}