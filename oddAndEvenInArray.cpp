#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int even=0,odd=0;
    for(int i =0;i<5;i++){
        if(a[i]%2==0)
            even++;
        else
            odd++;    
    }
    cout<<"Odd and even : "<<odd<<" "<<even; 
}
