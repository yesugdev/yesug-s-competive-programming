#include<iostream>
using namespace std;
int main()
{

int n;
cin >> n;
if(n == 1){
	cout <<"YES";
	return 0;
}
bool ans = true;
while(n > 1){


if(n % 2 != 0){
ans = false;
break;
}
n = n / 2;


}
if(ans) cout <<"YES";
else cout <<"NO";
}