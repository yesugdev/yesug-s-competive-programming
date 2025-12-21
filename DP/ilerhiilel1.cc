#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	
long long n;
cin >> n;
long long sum = 0;
for(int i = 1; i <=n; i++){
		long long urj = 1;
		for(int j = i; j <= 2 * i; j++){
			urj = urj * j;
//			cout << urj << " ";
		}
		sum += urj;
	
		
}
cout << sum;

}
