#include <iostream>
using namespace std;

int main()
{
    for(int i=1;i<=5;i++){
        for(int k=0;k<5-i;k++){
            cout<<" ";
        }
        int no_of_char=2*i-1;
        for(int j=0;j<no_of_char;j++){
        cout<<(char)('A'+j);
    }cout<<endl;
}
   
    return 0;
}
