#include<iostream>
using namespace std;


int main(){

int n;
cin >> n;

int a = n - 1;
cout << n << endl;
while(a > 0){

for(int i = n; i >=a; i--){
	cout << i << " ";
}
cout << endl;
a--;

}


}