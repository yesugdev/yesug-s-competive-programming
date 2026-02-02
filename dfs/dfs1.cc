#include<bits/stdc++.h>
using namespace std;

void dfs(int uld, vector<int>&path, int last){

    if(uld == 0){
        for(int el : path) cout << el << " ";
        cout << endl;
        return;
    }
    for(int i = last; i <=uld; i++){

        path.push_back(i);
        dfs(uld - i, path, i);
        path.pop_back();

    }


}
int main(){

    vector<int>path;
    int n;
    cin >> n;
    dfs(n,path,1);


}