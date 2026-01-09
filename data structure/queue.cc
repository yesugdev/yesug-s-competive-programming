#include<bits/stdc++.h>
using namespace std;


int main(){

queue<int>q;

deque<int>dq;

q.push(1);
q.push(2);
q.push(3);
q.push(4);

cout << "front : " << q.front()  << endl;
cout << "back : " << q.back() << endl;

// q.emplace(10); // push

// cout << "front : " << q.front()  << endl;
// cout << "back : " << q.back() << endl;

// q.push(9);

// cout << "front : " << q.front()  << endl;
// cout << "back : " << q.back() << endl;

q.pop();


cout << "front : " << q.front()  << endl;
cout << "back : " << q.back() << endl;

while(!q.empty()){


    cout << q.front() << endl;
    q.pop(); 

}



}
