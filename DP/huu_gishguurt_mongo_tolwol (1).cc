#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	
long long n;
cin >> n;

vector<long long>dp(n+1, 0);
vector<long long>cost(n+1, 0);

for(int i = 1; i <= n; i++){
	cin >> cost[i];
}
dp[1] = cost[1];
dp[2] = cost[2];


for(int i =3; i <=n; i++){
	dp[i] = cost[i] + min(dp[i-1], dp[i-2]); //odoo gishgej bgaa gihsguuriinhee mongiig tolood
											// omnoh 2 gishguuriin ali baga tolbortei deer n gishgeh

}
cout << dp[n];


}
