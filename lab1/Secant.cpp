#include<iostream>
#include<cmath>
#define es 0.005
using namespace std;
double input(double a){
	return (cos(a)+(5*a)-6);
}
int main(){
    float xi,xii,error,fxi,fxii,x,itr=0;
    cout<<"Enter xi and xii";
    cin>>xi>>xii;
    do{
        fxi=input(xi);
        fxii=input(xii);
        x=xi-((xi-xii)/(fxi-fxii))*fxi;
        error=abs((x-xii)/x);
        xi=xii;
        fxi=fxii;
        xii=x;
        itr++;
        
    }while(es<error);
    cout<<"The root is"<<x<<endl;
    cout<<"The functional value is"<<fxi<<endl;
    cout<<"The iteration is"<<itr;

}