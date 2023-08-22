#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return (sin(exp(-x)));
}
int main(){
	double x0,x1,fx0,fx1,I,h,n,x;
	cout<<"Enter value for x0:";
	cin>>x0;
	cout<<"Enter value for x1 : ";
	cin>>x1;
	cout<<"Value of f(x0): "<<f(x0)<<endl;
	cout<<"Value of f(x1): "<<f(x1)<<endl;
	cout<<"Enter value for n : ";
	cin>>n;
	h=(x1-x0)/n;
	I=f(x0)+f(x1);
	for(int i=1;i<n;i++){
		x=x0+i*h;
		I=I+2*f(x);
	}
	I=I*h/2;
	cout<<"Required value is : "<<I<<endl;
	return 0;
}