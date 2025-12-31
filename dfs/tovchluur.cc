#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans = INT_MAX;

void dfs(int curr, int steps) {
    if(curr > 2*m) return; 
    if(curr <= 0) return;  

    if(curr == m) {
        ans = min(ans, steps);
        return;
    }

    dfs(curr * 2, steps + 1);  // улаан товчлуур
    dfs(curr - 1, steps + 1);  // цэнхэр товчлуур
}

int main() {
    cin >> n >> m;
    dfs(n, 0);
    cout << ans << "\n";
    return 0;
}
