#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> cnt(10, 0);

    for (long long i = n; i <= m; i++) {
        long long x = i;
        while (x > 0) {
            cnt[x % 10]++;
            x /= 10;
        }
    }

    for (int d = 9; d >= 0; d--) {
        if (k > cnt[d]) {
            k -= cnt[d];
        } else {
            cout << d;
            return 0;
        }
    }

    cout << -1;
    return 0;
}

