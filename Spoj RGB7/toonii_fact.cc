#include<iostream>
using namespace std;
int main()
{

	int n;
	cin >> n;

	int i = 1;

	while(n % i ==0){
		n = n / i;
	i++;
	}
	if(n == 1) cout <<i - 1;	
	else cout <<"No";

}