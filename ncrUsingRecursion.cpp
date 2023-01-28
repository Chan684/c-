#include<iostream>
using namespace std;
int fact(int n){
    if (n==0)
        return 0;
    return fact(n-1)*n;   
}
int perm(int n,int r){
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    return num/den;
}
int nCr(int a,int b){
    if (a==b|| b==0) 
        return 1;
    return nCr(a-1,b-1)+nCr(a-1,b);    
}
int main()
{
    cout<<nCr(5,2)<<endl;
    return 0;
}
