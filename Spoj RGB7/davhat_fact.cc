#include<iostream>
using namespace std;
int fact(int n){
int ans = 1;
for(int i = 1;i <=n; i++){
	ans = ans * i;
}
return ans;
}
int pow(int a, int b){
int s = 1;
for(int i = 0 ; i < b; i++){
	s*=a;
}
return s;
}

int main(){
int n;
cin >> n;
int s = 1;
if(n % 2 == 0){
	for(int i = 2; i <=n; i+=2) s*=i;
}else{
	for(int i = 1; i <=n; i+=2) s*=i;
}
cout <<s;
}