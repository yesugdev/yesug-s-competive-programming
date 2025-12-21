#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
long long comb(long long n, long long k){
    if(k > n) return 0;
    if(k > n - k) k = n - k;

    long long res = 1;
    for(long long i = 1; i <= k; i++){
        res = res * (n - k + i) / i;
    }
    return res;
}
long long selegemel(long long n, long long k){

if(k > n) return 0;
long long res = 1;
for(int i = 1; i <=k; i++){
    res = res * (n - i + 1);
}
return res;

}

int main(){
    long long k;
    cin >> k;
    cout << comb(4,2);
}

