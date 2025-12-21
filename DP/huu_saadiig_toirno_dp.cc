#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long step;
	cin >> step;
	vector<long long> dp(n + 1, 0);
	vector<bool> saad(n+1, false);
	while(step--){
		int k;
		cin >> k;
            saad[k] = true;
		
	}
	
dp[0] = 1;

if (saad[1]) dp[1] = 0;
else dp[1] = dp[0];

if (saad[2]) dp[2] = 0;
else dp[2] = dp[1] + dp[0];

if (saad[3]) dp[3] = 0;
else dp[3] = dp[2] + dp[1] + dp[0];
	
for (int i = 4; i <= n; i++) {
    if (saad[i]) {
        dp[i] = 0;
        continue;
    }
    
 	dp[i] = dp[i - 1] + dp[ i - 2] + dp[i - 3];   
    
    }


	cout << dp[n];
	
	
} 
