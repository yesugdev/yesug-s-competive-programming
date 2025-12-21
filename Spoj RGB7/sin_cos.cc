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
double solve(int n){

}
int main(){
int n;

cin >> n;
double ans = 1;
for(int i = 1; i <=n; i++){
double s1 = 0;
double s2 = 0;

for(int j = 1; j <=i; j++){
	s1+=cos(j);
	s2+=sin(j);
}
ans *= (s1/s2);


}

cout <<fixed<<setprecision(3) <<ans;
}