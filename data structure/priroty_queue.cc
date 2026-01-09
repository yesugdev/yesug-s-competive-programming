#include<bits/stdc++.h>
using namespace std;
int main(){

// priority_queue<int>pq; //max Heap

// pq.push(100);
// pq.push(10);
// pq.push(200);
// pq.push(9);
// pq.push(8);

// cout << pq.top();


//min heap

priority_queue<int,vector<int>,greater<int>> pq;

pq.push(3);
pq.push(1); 
pq.push(5);
pq.push(12);


cout << pq.top() << endl;
pq.pop();
cout << pq.top() << endl;

}