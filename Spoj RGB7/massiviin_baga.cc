#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

int n;
cin >> n;

int a[n];
int sum =0;
int sondgoi = 0;
int tegsh =0;
for(int i = 0; i < n; i++)
{
	cin >> a[i];
}

int k;
cin >> k;
int cnt = 0;
for(int i = 0; i < n; i++){
if(a[i] ==k){
	cnt++;
}
}
cout << k << ' ' << cnt;


}