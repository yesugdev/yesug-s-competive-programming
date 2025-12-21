#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    priority_queue<int> digits;

    for(long long i = n; i <= m; i++){
        long long x = i;
        while(x > 0){
            digits.push(x % 10);
            x /= 10;
        }
    }

    while(k>1){
    	digits.pop();
    	k--;
    }
    cout << digits.top();

  
    return 0;
}
