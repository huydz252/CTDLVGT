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
	int count_min = 0; double sum_min = 0;
	int count_max = 0; double sum_max = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] <= 0.01 && arr[i] > 0){
			sum_min+=arr[i];
			count_min++;
		}else if (arr[i] > 0) {
			sum_max+=arr[i];
			count_max++;
		}
	}
	double avg_max = (count_max != 0) ? sum_max/count_max : 0;
	double avg_min = (count_min != 0) ? sum_min/count_min : 0;	
	return (avg_max+avg_min);
}

int main() {
	int n;
	cout<<"nhap n: "; cin>>n;	
	double arr[n];
	nhapmang(arr, n);
	xuatmang(arr, n);
	cout<<"Ket qua: "<<SUMAVG(arr, n);

}
