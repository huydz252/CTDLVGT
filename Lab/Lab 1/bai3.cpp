#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	else 
		return gcd(b, a%b);
}

int lcm(int a, int b){
	return (a*b)/(gcd(a,b));
}

int main(){
    cout<<gcd(4,6)<<endl;
    cout<<lcm(4,6);

}

