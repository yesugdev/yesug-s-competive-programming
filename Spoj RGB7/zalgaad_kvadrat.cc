#include<iostream>
#include<cmath>
using namespace std;

int main(){

int n;
cin >> n;

int digit = log10(n) + 1;


int zuut = 10;

while(digit > 1){

zuut = zuut * 10;
digit--;
}
int ans = (zuut + n);
ans = ans * 10 + 1;
cout << ans * ans;

}