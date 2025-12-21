#include<iostream>
using namespace std;
int main(){

	int n;
	int k;
	cin >> n;
	int sum = 0;
	int mn =9;
	while(n > 0){
 	int rem = n % 10;
 	if(mn > rem){
	 	mn  = rem;
 		
 	}
 	n = n / 10;

	}
	cout << mn;
}