#include<iostream>
#include<cmath>
#define es 0.005
using namespace std;
double input(double a){
	return (cos(a)+(5*a)-6);
}

int main(){
float a,xl,xu,xm,error,temp,itr=0;
for (int i=0;i<2;i++){
    cout<<"Enter a";
    cin>>a;
if (input(a)==0){
    cout<<"Root is"<<a;
}else if(input(a)>0){
    xl=a;
}else if(input(a)<0){
    xu=a;
}
}
do{
    xm=(xl+xu)/2;
    if (input(xm)==0){
        cout<<"Root is "<<xm;
        exit(0);
    }else if(input(xm)>0){
        xl=xm;
    }else if(input(xm)<0){
        xu=xm;
    }
    error=abs((xm-temp)/xm);
    temp=xm;
    itr+=1;
}while(es<error);
    cout<<"The root is "<<xm<<endl;
    cout<<"The functional value is"<<input(xm)<<endl;
    cout<<"the total iteration is"<<itr;

}