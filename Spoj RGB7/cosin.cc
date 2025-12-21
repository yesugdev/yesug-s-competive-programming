#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double cur = cos((double)n);      

    for (int i = n - 1; i >= 1; --i) {
        cur = cos(i + cur);
    }

    cout << fixed << setprecision(3) << cur;
    return 0;
}
