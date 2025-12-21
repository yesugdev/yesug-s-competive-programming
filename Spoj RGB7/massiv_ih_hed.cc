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

	int mx = a[0];
	int mxI;
	for(int i = 0; i < n; i++)
	{

	if(mx < a[i]){
		mx  = a[i];
		mxI = i;
	}

	}
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{

	if(mx == a[i]){
		cnt++;
	}

	}
	cout << mx << " " << cnt ;


	}