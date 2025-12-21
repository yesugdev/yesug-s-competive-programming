#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	
long long n;
cin >> n;
vector<long long> dp (1001, 0);

dp[0] = 1;
dp[1] = 1;
dp[2] = 2;

long long has = 2;



bool isOdd = true;

for(int i = 4; i <=1000; i+=2){

dp[i] = dp[ i / 2] + 1;

dp[ i - 1] = dp[i] + dp[ (i - 1) - has];

has++;

}

cout << dp[n];
//for(int i = 0; i < dp.size(); i++) cout << dp[i] << " ";

}
