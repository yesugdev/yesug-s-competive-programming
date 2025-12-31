#include<bits/stdc++.h>


using namespace std;
int main(){

	int n;
	cin >> n;
	int a[n];
	int ones = 0;
	for(int i = 0; i < n; i++){
		 cin >> a[i];
		 if(a[i] == 1) ones++;
	}


	int curr = 0;
	int mx = INT_MIN;
	for(int i = 0; i < n; i++){
		int val;
		if(a[i] == 0){
			val = 1;

		}else{
			val = -1;
		}
		curr+=val;
		mx = max(mx, curr);
		if(curr < 0){
			curr = 0;
		}
	}
	cout << mx+ ones;


}