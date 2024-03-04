#include<iostream>
#include<string>
using namespace std;

string arabicToRoman(int n){
	string roman = "";
	int arrArabic[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string romanChars[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	for(int i = 0; i <= 12; i++){
		while(n >= arrArabic[i]){
			roman += romanChars[i];
			n -= arrArabic[i];
		}
	}
	return roman;
}

int main(){
	int n;
	cout<< "nhap n: ";
	cin>>n;
	string roman = arabicToRoman(n);
	cout<<roman;
}
