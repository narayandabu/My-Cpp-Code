#include <bits/stdc++.h>
using namespace std;

bool checkDistances(string s, vector<int>& distance) {
    for(int i=0;i<s.size();i++){
        int x=distance[s[i]-'a'];
        if(x!=-1){
            if(i+x+1>=s.size() or s[i+x+1]!=s[i]) return false;
        }
        distance[s[i]-'a']=-1;
    }
    return true;
    }