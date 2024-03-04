#include<iostream>
using namespace std;

void userDefinedFunction(double a, double b){
	cout<<a<<"+"<<b<<"="<<(a+b)<<"\n";
	cout<<a<<"-"<<b<<"="<<(a-b)<<"\n";
	cout<<a<<"*"<<b<<"="<<(a*b)<<"\n";
	cout<<a<<"/"<<b<<"="<<(a/b)<<"\n";
}

int main(){
	double a,b;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;	
	userDefinedFunction(a,b);
}
