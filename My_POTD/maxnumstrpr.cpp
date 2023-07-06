#include <bits/stdc++.h>
using namespace std;
 
 
 
int maximumNumberOfStringPairs(vector<string>& words) {
    int ct{0};
    unordered_map<string,int> st;
    for(string str:words)st[str]++;
    for(string str:words){
        string s;
        s.push_back(str[1]);s.push_back(str[0]);
        if(st.find(s)!=st.end() and str!=s)ct++;
        else if(st[str]>1)ct++;
    }
    return (ct/2);


}