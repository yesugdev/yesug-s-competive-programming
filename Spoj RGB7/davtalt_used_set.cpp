#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	string bro = str;
	long long cnt = 1;
	set<string>seen;
	while(!seen.count(str)){
		seen.insert(str);

		string temp = str;
		sort(temp.begin(), temp.end(), greater<char>());
		sort(str.begin(), str.end());
		long long a = stoi(temp);
		long long b = stoi(str);
		long long c = a - b;
		string cc = to_string(c);
		str = cc;
		
		cnt++;
	}
	cout << cnt - 1;
	
}