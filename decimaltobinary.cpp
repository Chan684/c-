#include <iostream>
using namespace std;

int main()
{
    int ans=0,n,power=1;
    cin>>n;
    while(n>0){
        int digit=n%2;
         ans+=digit*power;
        power*=10;
        n/=2;
    }
    cout<<ans<<" ";
    return 0;
}
