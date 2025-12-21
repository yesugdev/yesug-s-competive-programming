#include<iostream>
using namespace std;
int fact(int n){
	if(n == 1) return 1;
	return n* fact(n-1);
}

int main(){
	int n;
	cin >> n;
	// n=5
	1 * 2 * 3 * 4 * 5;
	cout << fact(n);
	
}