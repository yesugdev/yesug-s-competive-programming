#include<bits/stdc++.h>


using namespace std;
int main(){
	//try implement kadane algorithm
	// algorithm iin hamgiin gol sanaa n tus nohtsol deer yavagdana.
	// Kadane iin algorithm iin tus nohtsol n nemj bh yd niilber n hasah ruu orwol nemegdeh bish horogdoh uchraas max sub array niilber bish ashiggui bna
	//curr < 0 => curr = 0


	vector<int>a;

	a.push_back(1);

	a.push_back(-2);

	a.push_back(3);
	a.push_back(4);


	int curr = 0;
	int mx = INT_MIN;
	int temp = 0;
	int low = 0;
	int high = 0;


	for(int i = 0; i < a.size(); i++){
		curr+=a[i];
		if(mx < curr){
			mx = curr;
			low = i;
			high = temp;
		}
		if(curr < 0){
			curr = 0; 
			temp = i + 1;

		}
	}
	cout << high + 1 << " " << low + 1 << " tus zawsar hamgiin ih niilber bna :3\n";
	cout << mx << endl;

}