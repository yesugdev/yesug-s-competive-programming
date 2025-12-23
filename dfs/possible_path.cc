#include<bits/stdc++.h>
using namespace std;


void dfs(int node, int end, vector<vector<int>>&adj, vector<bool>&vis, vector<int>&path, vector<vector<int>>&all_path){

vis[node] = true;
path.push_back(node);
if(node == end){
    all_path.push_back(path);
}else{
    for(int neighbors: adj[node]){
        if(!vis[neighbors]){
            dfs(neighbors,end,adj,vis,path,all_path);
        }
    }
}

vis[node] = false;
path.pop_back();


}


int main(){
	int n;
	cin >> n;
	vector<vector<int> >adj_matrix(n,vector<int>(n));


	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){

			cin >> adj_matrix[i][j];

		}

	}
	int start , end;
	cin >> start >> end;

	vector<vector<int> >adj(n+1);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){

			if(adj_matrix[i][j]){
				adj[i+1].push_back(j + 1);
			}

		}

	}
	vector<bool>vis(n+1, false);
	vector<int>path;
	vector<vector<int>>all_path;


	dfs(start, end, adj, vis,path,all_path);
	for(int i = 0; i < all_path.size(); i++){
		for(int j= 0; j < all_path[i].size(); j++){
			cout << all_path[i][j] << " ";
		}
		cout << endl;
	}





}
