#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    int first_digit=a/10000;
    int n=a/10;
    int secondlast_digit = n%10;
    sum = first_digit + secondlast_digit;
    cout<<sum<<endl;
    return 0;

}
