#include<iostream>
using namespace std;
int main(){

	int n;
	cin >> n;
	int sum = 0;
	int cnt =0;
	while(n > 0){
 	int rem = n % 10;
 	if(rem % 2 !=0){
	 	cnt++;
 		
 	}
 	n = n / 10;

	}
	cout << cnt;
}