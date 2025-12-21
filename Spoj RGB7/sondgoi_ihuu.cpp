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
	if(a[i] % 2 ==0){
	 tegsh++;
	}else{
		sondgoi++;
	}
}
if(sondgoi > tegsh ) cout <<"YES";
else cout << "NO";

}