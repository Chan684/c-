#include<iostream>
using namespace std;
int main() 
{ int i,j;
    char ch[] = "madam";
    for( i=0,j=4;i==j;i++,j--){
        ch[i] == ch[j];
    }
    if(ch[i]==ch[j])
        cout<<"yes"<<endl;
    else    
        cout<<"No"<<endl;    
    
    return 0;
} 
