#include<iostream>
using namespace std;
int main(){
int a[]={1,2,3,4,5};
int *p ;
int i;
p = (int *)malloc(5*sizeof(int)); // allocating memory in heap 
 p[0]=4;
 p[1]=2;
 p[2]=3;
 p[3]=7;
 p[4]=7;
    for(i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    cout<<4[a]<<endl;
    return 0;
}
