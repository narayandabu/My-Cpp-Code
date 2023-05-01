#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words){
    int ct{0};
    unordered_map<char,int> m;
    for (char c:allowed)m[c]=0;
    for(string s:words){
        bool flag =true;
        for (char c:s){
            if(m.find(c)==m.end()){
                flag=false;
                continue;
            }
        }
        if(flag)ct++;
    }
    return ct;
}