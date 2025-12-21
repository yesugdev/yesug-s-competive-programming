#include<iostream>
using namespace std;
int main(){

	int n;
	int k;
	cin >> n;
	int a = n;

	int rev = 0;
	int mn =9;
	while(n > 0){
 	int rem = n % 10;
 	
 	rev = rev * 10 + rem;

 	n = n / 10;

	}
	if(a == rev){
		cout << "YES";
	}else{
		cout <<"NO";
	}
}