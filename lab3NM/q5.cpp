#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return sin(x);
}

int main(){
	double x0,x1,x3,x2,I,h;
	cout<<"Enter the lower bound : ";
	cin>>x0;
	cout<<endl<<"Enter the upper bound : ";
	cin>>x3;
	
	h=(x3-x0)/3;
	x1=x0+h;
	x2=x1+h;
	I=((3*h)/8)*(f(x0)+f(x3)+3*f(x1)+3*f(x2));
	cout<<"The required answer is : "<<I;
	return 0;
		
}