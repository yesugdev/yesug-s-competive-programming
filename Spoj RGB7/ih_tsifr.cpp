#include<iostream>
using namespace std;
int main(){

	int n;
	int k;
	cin >> n;
	int sum = 0;
	int mx =0;
	while(n > 0){
 	int rem = n % 10;
 	if(mx < rem){
	 	mx  = rem;
 		
 	}
 	n = n / 10;

	}
	cout << mx;
}