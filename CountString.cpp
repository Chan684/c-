#include<iostream>
using namespace std;
int main() 
{ int count=0;
    char ch[] = "How are you";
    for(int i = 0;ch[i]!='\0';i++){
        if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z')
            count++;
    }
    cout<<count<<endl;
    return 0;
} 
