#include<iostream>
using namespace std;
int main() 
{ int count=1;
    char ch[] = "How are you";
    for(int i = 0;ch[i]!='\0';i++){
        if(ch[i]==' ') 
            count++;
    }
    cout<<count<<endl;
    return 0;
} 
