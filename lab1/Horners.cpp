#include<iostream>
using namespace std;
int h(int p[],int n,int x){
    int res=p[0];
    for (int i=1;i<n;i++){
        res=res*x+p[i];
    }
    return res;
}
int main(){
    int p[]={1,0,0,-6,0,10};
    int x=5;
    int n=sizeof(p)/sizeof(p[0]);
    cout<<"The value is"<<h(p,n,x);
    return 0;
}