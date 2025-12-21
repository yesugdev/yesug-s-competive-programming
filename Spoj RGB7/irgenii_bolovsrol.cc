#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

	double pi = 3.141592;
	double r;
	cin >> r;


 double talbai = pi * r * r;
 double urt = 2 * pi * r;
 cout <<fixed << setprecision(1)<< talbai << " " << urt;	
}