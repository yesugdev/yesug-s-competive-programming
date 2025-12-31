#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6] = {7,-11,6,4,3,8};

	int curr = 0;
	int mx = INT_MIN;
	int start = 0;
	int end = 0;
	int tempStart = 0;
	for(int i = 0; i < 6; i++){
		// cout << curr << " ";	
		curr+=a[i];
		if(curr > mx){
			mx = curr;
			start = tempStart;
			end = i;
		}
		if(curr < 0){
 			curr = 0;
 			tempStart = i + 1;		
		} 
	}
	cout << start << " " << end << endl;
}
