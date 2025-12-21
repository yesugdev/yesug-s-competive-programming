#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	
long long n;
cin >> n;

vector<long long>dp(n+1, 0);
vector<long long>cost(n+1, 0);
vector<int> parent(n+1);

for(int i = 1; i <= n; i++){
	cin >> cost[i];
}
dp[1] = cost[1];
dp[2] = cost[2];


vector<long long> ans;
for(int i =3; i <=n; i++){
	
	if(dp[i-1] < dp[i-2]){
			dp[i] = cost[i] + dp[i-1];
			parent[i] = i-1;
	}else{
		dp[i] = cost[i] + dp[i-2];
		parent[i] = i-2;
	}
	
	
}

for(int i = 0; i < parent.size(); i++) cout << parent[i] << " ";

//
//if( n <=2){
//	cout << dp[n]<<endl;
//	cout << dp[n];
//}else{
//	cout << dp[n] << endl;
//vector<int> path;
//    for(int i = n; i > 0; i = parent[i])
//        path.push_back(i);
//
//    reverse(path.begin(), path.end());
//
//   for(int i = 0; i < path.size(); i++){
//   	cout << path[i] << " ";
//   }
//	
//}


}
