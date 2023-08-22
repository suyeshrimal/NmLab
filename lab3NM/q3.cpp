#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return sin(x);
}

int main(){
	double x0,x1,x2,I,h;
	cout<<"Enter the lower bound : ";
	cin>>x0;
	cout<<endl<<"Enter the upper bound : ";
	cin>>x2;
	
	h=(x2-x0)/2;
	x1=(x0+x2)/2;
	I=(h/3)*(f(x0)+f(x2)+4*f(x1));
	cout<<"The required answer is : "<<I;
	return 0;
		
}