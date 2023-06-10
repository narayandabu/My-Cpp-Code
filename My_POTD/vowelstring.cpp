#include <bits/stdc++.h>
using namespace std;
 
 
 
int vowelStrings(vector<string>& words, int left, int right) {
    unordered_set<char> s;
    int ct{0};
    s.insert('a');s.insert('e');s.insert('i');s.insert('o');s.insert('u');
    for(int i = left; i < right; i++){
        int size=words[i].size()-1;
        if(s.find((words[i])[0])!=s.end() and s.find((words[i])[size])!=s.end()){
            ct++;
        }
    }
    return ct;



    }