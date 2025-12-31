#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    // n = 4  m = 6
    long long ans = 0;

    while(m > n) {
        if(m % 2 == 0)
            m /= 2;
        else
            m++;
        ans++;
    }

    ans += n - m;
    cout << ans;
    return 0;
}
