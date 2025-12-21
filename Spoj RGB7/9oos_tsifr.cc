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

	int n;
	cin >> n;
	int i = 9;
	while(n <=i){
		cout << i<<endl;
		i--;
	}
}