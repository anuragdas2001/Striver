//Sum Of First N Numbers
// Parameterised Way
#include<bits/stdc++.h>
using namespace std;
void PW(int n,int sum)
{
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    

    PW(n-1,sum+n);
}
//Functional Way
int FW(int n)
{
    if(n==0)
    return 0;

    return n+FW(n-1);
}
int main()
{
    int n=10;
    PW(n,0);
    cout<<FW(n);
}













// Functional Way 