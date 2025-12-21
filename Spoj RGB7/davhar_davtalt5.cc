#include<iostream>
using namespace std;


int main(){

int n;
cin >> n;

int a = 1;


while(a <=n ){

for(int i = n; i >=a; i--){


	cout << i << " ";
}
cout << endl;
a++;
}

}