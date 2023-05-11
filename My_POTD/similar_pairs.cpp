#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/count-pairs-of-similar-strings/submissions/
int similarPairs(vector<string>& words) {
        int size=words.size(),ct{0},hlw{0};
        map<set<char>,int>s;
        for (int i = 0; i < size; i++){
            set<char> hi;
            for(char c:words[i])hi.insert(c);
            s[hi]++;
        }
        for(auto it:s){
            hlw=it.second;
            if(hlw>1)ct+=((hlw*(hlw-1))/2);
        }
        return ct;
}