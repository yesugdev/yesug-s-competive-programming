#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6] = {7,-1,-6,4,3,8};

	int curr = 0;
	int mx = INT_MIN;

	for(int i = 0; i < 6; i++){
		curr+=a[i];
		if(mx < curr){
			mx = curr;
		}
		if(curr < 0) curr = 0; 
	}
	cout << mx;
}