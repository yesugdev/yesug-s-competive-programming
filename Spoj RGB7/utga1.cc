#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int el = 1;
    bool increased = true;

    for (int i = 1; i <= n; i++) {
        if (increased) {
            
            for (int j = 0; j < n; j++) {
                cout << setw(3) << el << " ";
                el++;
            }
        } else {
          
            int start = el + n - 1;  
            for (int j = 0; j < n; j++) {
                cout << setw(3) << start << " ";
                start --;
            }
            el += n;  
        }

        cout << endl;
        increased = !increased;

    }

    return 0;
}
