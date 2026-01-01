#include <bits/stdc++.h>
using namespace std;

int main() {
    
        int n;
        cin >> n;

        int el = n;

    for(int i = 1; i <=n; i++){

        if(i % 2 != 0){

            for(int j = 0; j < n; j++){

                cout <<setw(3) <<  el << " ";
                el--; //el = 0
            }
            el++;
        }else{
            for(int j = 0; j < n; j++){

                cout <<setw(3) << el++ << " ";


            }
            el--;


        }


        el = el + n;
        cout << endl;
    }   

    return 0;
}
