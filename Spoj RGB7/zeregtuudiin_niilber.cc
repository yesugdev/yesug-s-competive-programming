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


int a, n;
cin >> a >> n;
int sum = 0;
for(int i = 1; i <=n; i++){

sum+=pow(a,i);

}
cout << sum + 1;


}