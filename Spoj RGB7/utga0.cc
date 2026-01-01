#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n];
	int el = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <n; j++){
			a[i][j] = el;
			el++;
		}

	}
	for(int i = 0; i < n; i++){

		for(int j =0; j < n; j++){
			cout << setw(3) << a[i][j] << ' ';
		}
		cout <<endl;
	}
}