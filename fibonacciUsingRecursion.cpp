#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);    
}
int main()
{
    int s;
    s=fib(6);
    cout<<s<<endl;
    return 0;
}
