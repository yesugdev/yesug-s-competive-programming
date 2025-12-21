#include <bits/stdc++.h>
using namespace std;

int main() {
    int score;
    vector<pair<int,int> > scores;
    int idx = 1;
    while (cin >> score) {
        scores.push_back({score, idx});
        idx++;
    }
    
 	vector<pair<int,int> > ans;
 	while(!scores.empty()){
 		int mx = scores[0].first;
 		int mxPos = 0;
 		for(int i  = 1; i < scores.size(); i++){	
 			if(mx < scores[i].first){
 				mx = scores[i].first;
 				mxPos = i;
			 }	
		 } 
		 ans.push_back(scores[mxPos]);
		 scores.erase(scores.begin() + mxPos);
	 }
	 
	 for(int i = 0 ; i < ans.size(); i++){
	 	cout<< ans[i].second <<endl;
	 }
    
}


