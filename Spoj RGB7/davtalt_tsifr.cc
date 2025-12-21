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
	for(int i = 0 ; i < n ; i++) cout << i << " ";
}