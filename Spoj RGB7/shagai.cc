#include<iostream>
using namespace std;


int main(){

int k;
cin >> k;
int cnt = 0;
for(int honi = 0; honi <=k; honi++){

	for(int mori = 0; mori <=k - honi; mori++){
		for(int temee = 0; temee <=k - honi - mori; temee++){
			cnt++;
		}
	}

}
cout << cnt;

}