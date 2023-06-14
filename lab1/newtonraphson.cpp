#include<iostream>
#include<cmath>
#define es 0.005
using namespace std;
double f(double a){
    return cos(a)+5*a-6;
}
double der(double a){
    return -sin(a)+5;
}
int main(){
    float a,xnew,error,itr=1;
    cout<<"Enter a ";
    cin>>a;
    do{
        if (f(a)==0){
            cout<<"Root is"<<a;
        }else if(der(a)==0){
            cout<<"Root doesn't exist";
            exit(0);
        }else{
        xnew=a-(f(a)/der(a));
        error=abs((xnew-a)/xnew);
        a=xnew;
        itr++;
        }
    }while(es<error);
    cout<<"The root is "<<xnew<<endl;
    cout<<"The iteration is"<<itr<<endl;
    cout<<"The functional value is"<<der(a);
}