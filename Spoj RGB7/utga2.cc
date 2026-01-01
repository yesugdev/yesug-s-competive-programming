#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int el = n;

    bool increased = true;

    for(int i = 1;i <=n; i++){
        int temp = el;
    
        for(int j = 0; j < n; j++){
                cout << setw(3) << el-- << " ";
            }
            cout <<endl;
            el = temp + n;
        

    }

    return 0;
}
