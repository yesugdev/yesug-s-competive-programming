#include<iostream>
using namespace std;
int fact(int n){
int ans = 1;
for(int i = 1;i <=n; i++){
	ans = ans * i;
}
return ans;
}
int main(){
int n;
cin >> n;
int s = 0;
int a = n;
for(int i=  1;i <=n; i++){
	s+= i * a;
	a --;
}
cout << s;
}