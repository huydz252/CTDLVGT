#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int arr[100], *p, n;
void nhapmang(){
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

void xoasole(int &n, int ar[]){
	p=arr;
	for(int i=0; i<n; i++){
		if(*(p+i) % 2 == 1){
			for(int j = i; j<=n-1; j++){
				*(p+j) = *(p+j+1);
			}
			i--;
			n--;
		}
	}
}

int main(){
	cout<<"nhap n: ";
	cin>>n;
	srand(time(NULL));
	nhapmang();
	xuatmang(n);
	xoasole(n,arr);
	cout<< endl;
	xuatmang(n);
}









