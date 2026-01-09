#include<bits/stdc++.h>
using namespace std;

int main(){

stack<int>st;
st.push(1);
st. push(2);
st.push(3);


cout<< st.top()<<endl;

if(st.empty()) cout <<"HOOSON\n";
else cout <<"Hooson bish\n";

st.pop();

cout << st.top() << endl;
cout << "stack iin size : " << st.size() << endl;


cout << "Stack hoosolj hevleh :  " << endl;

while(!st.empty()){

    cout << st.top() << endl;
    st.pop();

}


}