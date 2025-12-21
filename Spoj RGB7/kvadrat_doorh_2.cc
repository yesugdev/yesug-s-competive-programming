	#include<iostream>
	#include<cmath>
	#include<iomanip>
	using namespace std;
	int main(){
		int n;
		cin >> n;
		double sum = 0;
		double cur; 
		
		for(int i = 0; i <n; i++){
			
			sum = sqrt(2+sum);
							
		}
		cout <<fixed<<setprecision(9)<<sum;
	}
		