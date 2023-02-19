#include<iostream>
using namespace std;
int main() 
{
    char ch[] = "WELCOME";
    for(int i = 0;ch[i]!='\0';i++){
        ch[i]= ch[i]+32;
    }
    cout<<ch<<endl;
    return 0;
} 
