#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    double s = 0;
    double cur = sqrt(2);
    for(int i = 0 ; i < n-1; i++){
        cur += sqrt(cur);
        
    }

    cout << fixed << setprecision(9) << cur;
    return 0;
}
