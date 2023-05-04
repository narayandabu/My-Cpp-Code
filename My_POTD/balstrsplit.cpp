#include <bits/stdc++.h>
using namespace std;


int balancedStringSplit(string s) {
        
    int flag{0},ct{0};
    for(char c:s){
        if(c=='L')flag++;
        else if(c=='R')flag--;
        if(!flag)ct++;
    }
    return ct;
}
//https://leetcode.com/problems/split-a-string-in-balanced-strings/submissions/