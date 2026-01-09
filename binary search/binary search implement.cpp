#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a[10];
	for(int i = 0; i < 10; i++){
		a[i] = rand() % 100 + 1;
//		cout << a[i] << " ";	
	}
	sort(a, a + 10);
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << endl;
	
	int l = 0;
	int r = 10 - 1;
	
	int key;
	cout << "key : "; cin >> key;
	
	
	while( l < r){
		
		int mid = (l + r) / 2;
	
		if( a[mid] < key){ // lower_bound(key) >=  ih buyu tentsuu logic
			l = mid +1;		
			
		}else{
			r = mid;
		}
//		
//		if( a[mid] <= key){ // upper_bound(key) >  ih logic 
//							// 3 3 3 3 4 5
//							//key = 3
//							//tus key ees ih bairlal bol 4
//			l = mid +1;
//			
//		}else{
//			r = mid;
//		}
		
		
	}
	
	cout << r  << l<< endl;
}

int main(){
	
	while(true){
		
		solve();
		
	}	
} 