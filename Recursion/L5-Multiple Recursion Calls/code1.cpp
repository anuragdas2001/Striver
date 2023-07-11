//Fibonnaci Series
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1)
        return n;

    int last=fib(n-1);
    int seclast=fib(n-2);
    return last+seclast;
}
int main(){
    cout<<fib(7);
}