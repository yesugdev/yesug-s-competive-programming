#include <bits/stdc++.h>
using namespace std;


int change(vector<int>a, int low, int high){


for(int i = low; i <= high; i++){
if(a[i] == 1){
    a[i] = 0;
}else{
    a[i] = 1;
}
}
int ans = 0;
for(auto el : a){
    if(el == 1) ans++;
}

return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &el : a){
        cin >> el;
    }

    int mx = 0;
    int mxI , mxJ;
    for(int i = 0; i < n; i++){
        for(int j = i; j< n; j++){
           
            int asd = change(a,i,j);
            if(mx < asd){
                mx = asd;
                mxI = i;
                mxJ = j;
            }
        }
    }
    cout << mx;

    return 0;
}
