#include<iostream>
using namespace std;
int main() 
{ int count=1;
    char ch[] = "How are you";
    for(int i = 0;ch[i]!='\0';i++){
        if(ch[i]==' '&& ch[i-1]!=' ') // if there are continuous space or white space
            count++;
    }
    cout<<count<<endl;
    return 0;
} 
