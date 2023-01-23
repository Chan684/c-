#include<iostream>
using namespace std;
double e(int m,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    r=e(m,n-1);
    p*=m;
    f*=n;
    return r+p/f;
}
int main(){
    double r =e(3,10);
    cout<<r<<endl;
}
