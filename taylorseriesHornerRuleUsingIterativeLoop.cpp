#include<iostream>
using namespace std;
double e(int x, int n){
    static double s=1;
    double num=1,den=1;
    for(int i =1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}
int main()
{   double r = e(1,10);
    cout<<r<<endl;
    return 0;
}
