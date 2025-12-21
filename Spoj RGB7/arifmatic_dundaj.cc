#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	double sum = 0;
	double a = n;
	while(n--){
		double bro;
		cin >> bro;
		sum+=bro;
	}
	double ans = sum / a;
	cout<< fixed<< setprecision(2) << ans;
}