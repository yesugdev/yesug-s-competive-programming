#include<bits/stdc++.h>
using namespace std;
int main(){


    //unordered map - > hash map

    map<char, int> mp;

    mp.insert({'c',4});
    mp.insert({'b',2});
    mp.insert({'a',3});

    // for(map<char,int>::iterator it = mp.begin(); it != mp.end(); it++){

    //     cout << it->first << " " << it->second << endl;

    // }

    // for(auto pair : mp){
    //     cout << pair.first <<  " " << pair.second  << endl;
    // }
    //hamgiin yeronhii hereglee bol davtamj tooloh

    string bro = "aassddddaaaaaab";

    map<char, int>freq; //key uud osoh daraallaar hadgalagdana 
    //insert find erase O(log n)
    

    for(int i = 0 ; i < bro.size(); i++){

        freq[bro[i]]++;

    }

    for(auto pair : freq){
        cout << pair.first << " " << pair.second << endl;
    }

}