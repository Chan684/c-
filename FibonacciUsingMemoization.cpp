#include<iostream>
using namespace std;
int F[10];
int mfib(int n){
    if(n<=1) return n;
    if(F[n-2]==-1) F[n-2]=mfib(n-2);
    if(F[n-1]==-1) F[n-1]=mfib(n-1);
    return mfib(n-2)+mfib(n-1);
}
int main()
{
    for(int i=0;i<10;i++){
        F[i]= -1;
    }
    
    cout<<mfib(10)<<endl;
    return 0;
}
