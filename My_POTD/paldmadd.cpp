#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/lexicographically-smallest-palindrome/submissions/
string makeSmallestPalindrome(string s) {
    int size=s.size();
    for (int i = 0; i < size/2; i++){
        if(s[i]!=s[size-1-i]){
            if(s[i]>s[size-1-i])s[i]=s[size-1-i];
            else s[size-1-i]=s[i];
        }
    }
    return s;
    }