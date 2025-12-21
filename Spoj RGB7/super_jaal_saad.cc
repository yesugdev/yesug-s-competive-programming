#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long k;
	cin >> k;
	long long gishguur[k];
	long long dp[n + 1];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	priority_queue<long long, vector<long long>, greater<long long>> pq;
	
	for(long long i = 0; i < k; i++){
		cin >> gishguur[i];
		pq.push(gishguur[i]);

	}
	if(gishguur[0] == 1){
		dp[1] = 0;
		pq.pop();
	}
	if(gishguur[1] == 2){
		dp[2] = 0;
		pq.pop();
	}
	if(gishguur[2] == 3){
		dp[3] = 0;
		pq.pop();
	}

	for(long long i =4 ; i < n; i++){
		
		if(pq.top() == i) {
			dp[i] = 0;
			pq.pop();
			continue;
		}	
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];

	}
	cout << dp[n- 1];


} 