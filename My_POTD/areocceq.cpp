#include <bits/stdc++.h>
using namespace std;

bool areOccurrencesEqual(string s) {
    unordered_map<char,int> m;
    for (int i = 0; i < s.size(); i++)m[s[i]]++;
    int t=m[s[0]];
    for (auto it:m)if(it.second!=t)return false;
    return true;
}
//https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/