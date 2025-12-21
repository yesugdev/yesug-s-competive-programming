#include<iostream>
using namespace std;
int main(){

	int n;
	int k;
	cin >> n >> k;
	int sum = 0;
	int cnt =0;
	while(n > 0){
 	int rem = n % 10;
 	if(rem==k){
	 	cnt++;
 		
 	}
 	n = n / 10;

	}
	cout << cnt;
}