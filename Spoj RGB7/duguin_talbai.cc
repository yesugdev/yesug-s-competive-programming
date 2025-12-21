#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

double urt;

double pi = 3.141592;
cin >> urt;
//urt = 2*pi*r
double r = (urt)/(2*pi);

double area = pi * r * r;

cout << fixed << setprecision(4)<<area;

}