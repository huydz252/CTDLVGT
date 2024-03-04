#include<iostream>

using namespace std;

void nhapmang(double arr[1000], int n){	
	for(int i = 0; i < n; i++){
		cout<<"phan tu thu "<<i+1<<" :";
		cin>>arr[i] ;
	}		
}

void xuatmang(double arr[1000], int n){
	for(int i=0; i<n; i++){
		cout <<arr[i] <<" " ;
	}
	cout<<"\n";
}

double SUMAVG(double arr[1000], int n){
	int count = 0;
	double sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i]>0){
			sum+=arr[i];
			count++;
		}
	}
	return sum/count;
}

int main() {
	int n ;
	cout<<"nhap n: "; cin>>n;
	double arr[n];
	nhapmang(arr, n);
//	xuatmang(arr, n);
	cout<<SUMAVG(arr, n);

}

