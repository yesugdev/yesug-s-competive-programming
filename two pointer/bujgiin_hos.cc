#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> boys(n);
    for (auto &x : boys) cin >> x;

    int m;
    cin >> m;
    vector<int> girls(m);
    for (auto &x : girls) cin >> x;

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int i = 0, j = 0, cnt = 0;

    while (i < n && j < m) {
        if (abs(boys[i] - girls[j]) <= 1) {
            cnt++;   
            i++;
            j++;
        } else if (boys[i] < girls[j]) {
            i++;
        } else {
            j++;
        }
    }

    cout << cnt;
    return 0;
}
