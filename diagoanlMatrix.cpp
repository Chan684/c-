#include<iostream>
#include<stdio.h>
using namespace std;
struct matrix{
    int a[10];
    int m,n;
};
void set (struct matrix *m, int i ,int j, int x){
    if(i==j){
        cout<<m->a[i-1]=x;
    }    
}
void display(struct matrix m){
    int i,j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j){
                cout<<m.a[i];
            }
            else{
                cout<<"0";
            }
        }
    }
}
int main(){
    struct matrix m;
    m.n=4;
    set(&m,1,1,1); set(&m,2,2,2); set(&m,3,3,3); set(&m,4,4,4)
    display(m);
}
