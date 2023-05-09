//Factorial of N Numbers or,
//Product from 1 to N
#include <bits/stdc++.h>
using namespace std;
//Parameterised Way
void PW(int n,int prod)
{
    if(n==1)
    {
        cout<<prod<<endl;
        return;
    }
    PW(n-1,prod*n);
}
//Functional Way
int FW(int n)
{
    if(n==0)
    return 1;

    return n*FW(n-1);

}
int main()
{
   int n=100;
    PW(n,1);
    cout<<FW(n);
}