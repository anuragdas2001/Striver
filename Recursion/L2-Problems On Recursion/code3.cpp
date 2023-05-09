//print from N to 1
#include<bits/stdc++.h>
using namespace std;
void f(int cnt)
{
    if(cnt<1)
        return;

    cout<<cnt<<endl;
    f(cnt-1);
    
}
int main()
{
    f(10);

}