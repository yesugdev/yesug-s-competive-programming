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
int main(){

int n;
cin >> n;
for(int i = 1; i <=n; i++){
	for(int j = 1; j <=n; j++){
		cout << j<< ' ';
	}
	cout << endl;
}
}