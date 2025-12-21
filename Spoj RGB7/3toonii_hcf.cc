#include<iostream>
using namespace std;

int gcd(int a, int b){

while(b!=0){
int uld = a % b;
a = b;
b = uld;
}
return a;

}
int hcf(int a, int b){
	int bro = (a * b)/(gcd(a , b));
return bro;
}
int main(){

int a, b;
cin >> a >> b;

while(b!=0){
cout << b  << " " << a/ b << endl; 
int uld = a % b;
a = b;
b = uld;



}

}