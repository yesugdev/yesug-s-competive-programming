#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
vector<int> path;

void dfs(int uld, int i ) {
    if (uld == 0) {
        cnt++;

        // зам хэвлэх
        for (int x : path) cout << x << " ";
        cout << endl;

        return;
    }

    for (int i = 1; i <= uld; i++) {
        path.push_back(i);          // сонгох
        dfs(uld - i, i);         // рекурс 
        path.pop_back();            // буцаах (backtrack)
    }
}

int main() {
    int n;
    cin >> n;

    dfs(n,1);

    cout << "Total paths: " << cnt << endl;
    return 0;
}
