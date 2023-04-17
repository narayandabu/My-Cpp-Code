#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
       int size=s.size();
       int j{0};
        for (int i = 0; i < size; i++){
            if(s[i]==' '){
                reverse(s.begin()+j,s.begin()+i-1);
                j=i+1;
            }
        }
        return s;
    }
//https://leetcode.com/problems/reverse-words-in-a-string-iii/