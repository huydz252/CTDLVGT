#include<iostream>
using namespace std;

double SUMAVG(double n){
	int count_min = 0; double sum_min = 0;
	int count_max = 0; double sum_max = 0;
	if(n <= 0.01 && n > 0){
		sum_min+=n;
		count_min++;
	}else if (n > 0) {
		sum_max+=n;
		count_max++;
	}
	double avg_max = (count_max != 0) ? sum_max/count_max : 0;
	double avg_min = (count_min != 0) ? sum_min/count_min : 0;
		
	return (avg_max+avg_min);
}

int main() {
	int n;
	cout<<"nhap n: "; cin>>n;
	double tong = 0, giatri;	
	for(int i = 1; i <= n; i++){
		cout<<"phan tu " <<i <<" : "; 
		cin>> giatri;
		tong += SUMAVG(giatri) ;
	}
	cout<<"ket qua: "<<tong / n;
	return 0;
}
