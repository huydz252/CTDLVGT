#include<iostream>
#include <cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

int arr[100], *p, n;
void nhapmang(int n){
	p = arr; //p tro toi dia chi bat dau cua mang
	for (int i=0; i<n; i++){
		*(p+i) = rand() % (100-1+1)+1;  //dia chi (p+i) gan 1 so ngau nhien tu 1-100;
	}
}

void xuatmang(int n){
	for(int i=0; i<n; i++){
		cout <<arr[i] <<" ";
	}
}

int main(){
	srand(time(NULL));
	n = rand() % (100-1+1)+1;	
	nhapmang(n);
	xuatmang(n);
}









