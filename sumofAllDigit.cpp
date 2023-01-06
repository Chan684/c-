#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,n;
  cout<<"How many no of digit"<<endl;
  cin>>n;
    cin>>a;
    for(int i=0;i<n;i++){
        sum+= a%10;
        a/=10;
        
    }cout<<sum<<endl;
    return 0;
}
