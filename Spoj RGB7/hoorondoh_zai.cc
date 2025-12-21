#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

double a, b;
double x1,y1,x2,y2;
double xz1,yz1,zz1, xz2,yz2,zz2;
cin >> a >> b;
cin >> x1 >> y1 >> x2 >> y2;
cin >> xz1 >> yz1 >> zz1 >> xz2 >> yz2>> zz2;
double zai1 = abs(a - b);
double zai2 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
double zai3 = sqrt(pow(xz2-xz1,2)+pow(yz2-yz1,2)+pow(zz2-zz1,2));
cout << fixed <<setprecision(3)<<zai1<<endl;
cout << fixed <<setprecision(3)<<zai2<<endl;
cout << fixed <<setprecision(3)<<zai3<<endl;

}