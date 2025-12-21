#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int fact(int n){
int ans = 1;
for(int i = 1;i <=n; i++){
	ans = ans * i;
}
return ans;
}

int main(){
double x;
int n;

cin >> x;
cin >> n;
double s = 0;
double cur = x;
for(int i = 1; i <=n ; i++){

cur = sin(cur);
s+=cur;

}

cout <<fixed<<setprecision(3) <<s;
}