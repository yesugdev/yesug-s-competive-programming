#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	
long long n;
cin >> n;
vector<long long> dp(n + 1 , 0);
long long k;
cin >> k;

if(k == 1){
dp[1] = 0;
 	
}else{
	dp[1] = 1;
}
if( k == 2){
	dp[2] = 0;
}else{
	dp[2] = 2;
}

for(int i = 3; i <=n; i++){
	if(i == k){
		dp[i] = 0;
		continue;
	}
	dp[i] = dp[i - 1] + dp[ i - 2];
}
cout << dp[n];


}
