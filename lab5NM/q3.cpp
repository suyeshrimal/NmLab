#include<iostream>
using namespace std;
double m(double x,double y){
	return x+y;
}
int main(){
	double h,y0,x0,x1,y1,target,m1,m2,m3,m4;
	cout<<"enter h : ";
	cin>>h;
	cout<<"Enter initial x  : ";
	cin>>x0;
	cout<<"Enter initial y  : ";
	cin>>y0;
	cout<<"Enter the value of x where you need y : ";
	cin>>target;
	x1=x0+h;
	while(x1<=target){
		m1=m(x0,y0);
		m2=m(x0+(h/2),y0+m1*(h/2));
		m3=m(x0+(h/2),y0+m2*(h/2));
		m4=m(x0+h,y0+m3*h);
		y1=y0+((m1+2*m2+2*m3+m4)/6)*h;
		x0=x1;
		y0=y1;
		x1=x1+h;
	}
	cout<<"y("<<target<<")="<<y1;
	return 0;	
}