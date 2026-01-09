#include<bits/stdc++.h>
using namespace std;
int main(){

set<int>st;
st.insert(2323);
st.insert(1123);
st.insert(1);
st.insert(1);
st.insert(2);

for(auto it : st) cout << it << endl;

//yeronhii hereglee bol davtamjiig alga bolgoh mon omno n tus element bsn uguig shalgah

//count ashiglaj haruuliy

if(st.count(0)){

    cout << "Tus element ali heziinee baina" << endl;

}else{
    cout <<"alga baina" << endl;
}


auto it = st.find(1);
if(it == st.end()){
    cout << "Tus element alga";
}else{
    cout << "Found " << *it << endl;
}

st.erase(1);
st.erase(2);


// st.clear();
for(auto el : st) cout << el << " ";

}