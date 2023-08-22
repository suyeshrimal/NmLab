#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return (sin(exp(-x)));
}
int main(){
	double x0,x1,fx0,fx1,I;
	cout<<"Enter value for x0:";
	cin>>x0;
	cout<<"Enter value for x1 : ";
	cin>>x1;
	cout<<"Value of f(x0): "<<f(x0)<<endl;
	cout<<"Value of f(x1): "<<f(x1)<<endl;
	I=((x1-x0)/2)*(f(x0)+f(x1));
	cout<<"Required value is : "<<I<<endl;
	return 0;
		
}