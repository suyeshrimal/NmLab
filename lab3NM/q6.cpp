#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return sin(x);
}
int main(){
	int n;
	cout<<"Enter the number of points : ";
	cin>>n;
	double I=0,a,b,x[n],h;
	if(n%3==0){
		cout<<"Enter the lower bound : ";
		cin>>a;
		cout<<endl<<"Enter the upper bound : ";
		cin>>b;
		h=(b-a)/n;
		x[0]=a;
		x[n]=b;
		for(int i=1;i<n;i++){
		x[i]=a+(i*h);
		}
		for(int i=1;i<n;i++){
			if(i%3==0){
				I+=2*f(x[i]);
			}else{
				I+=3*f(x[i]);
			}
		}
		I=(I+f(x[0])+f(x[n]))*((3*h)/8);
		cout<<endl<<"The required answer is : "<<I;	
	}else{
		cout<<"n should be multiple of 3!";
	}
	
	return 0;
}