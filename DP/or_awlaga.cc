#include<iostream>
#include<vector>
using namespace std;
int main(){

	long long n, m;
	cin >> n >> m;
	vector<long long> bal(n+1, 0);
	for(int i = 1; i <=m; i++){
		
		int a, b, c;
		cin >> a >> b >> c;
		bal[a] -=c;
		bal[b] += c;
		
		
	}
	long long ans = 0;
	
	for(int i = 1;i <bal.size(); i++){

		if(bal[i] > 0){
			ans+=bal[i];
		}
		
	}
	cout << ans;
	
	
}
