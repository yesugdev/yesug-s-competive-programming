#include<bits/stdc++.h>
using namespace std;
int main(){

unordered_map<char, int> mp;
mp.insert({'a',2});
mp.insert({'c',3});
mp.insert({'b',4});
mp.insert({'b',4});

for(auto pair : mp){
    cout << pair.first << " " << pair.second << endl;
}

//insert find erase O(1)

//find hiij uzetsgeey
char key = 'b';

unordered_map<char, int>::iterator it = mp.find(key);


if(it == mp.end()){
    cout <<"Not found" << endl;
}else{
    cout << "Found " << it->first << " " << it->second << endl;
}



}