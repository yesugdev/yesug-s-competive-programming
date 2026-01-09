#include<bits/stdc++.h>
using namespace std;
int main(){

unordered_set<int>st; //hash set daraalal todorhoigui bolno
//insert delete find n O(1) bolno

st.insert(2323);
st.insert(1123);
st.insert(1);
st.insert(1);
st.insert(2);

for(auto it : st) cout << it << endl;


}