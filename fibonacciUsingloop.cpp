#include<iostream>
using namespace std;
int fib(int n){
    int t0=0,t1=1,s;
    if(n<=1)
        return n;
    for(int i=2;i<=n;i++){
        s= t0+t1;
        t0=t1;
        t1=s;
    }    return s;
}
int main()
{
    int s;
    s=fib(6);
    cout<<s<<endl;
    return 0;
}
