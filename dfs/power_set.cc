#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>&a, vector<int>&path, int idx){


if(idx == a.size()){


    for(int el : path) cout << el << " ";
    cout << endl;
    return;
}



dfs(a, path, idx + 1);
path.push_back(a[idx]);

dfs(a,path,idx+1);

path.pop_back();


}
int main(){

    vector<int>path;
    vector<int>a = {1,2,3};

    dfs(a,path,0);

}