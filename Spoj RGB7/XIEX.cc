#include<iostream>
using namespace std;
int gcd(int a, int b){

while(b!=0){
int uld = a % b;
a = b;
b = uld;
}
return a;

}
int main(){

	int a, b;
	cin >> a>> b;
	
	int c = gcd(a, b);
	cout << a / c << "/" << b /c;

}