//https://leetcode.com/problems/number-of-different-integers-in-a-string/description/

#include <bits/stdc++.h>
using namespace std;
 
 
 
int numDifferentIntegers(string word) {
    unordered_set<string> s;    //a123bc34d8ef34
    for (int i = 0; i < word.size(); i++) {
        if (isdigit(word[i])){
	        string str;
            while (word[i]=='0')i++;
            while (isdigit(word[i]))str+=word[i++];
            s.insert(str);
        }
    }
    return s.size();
    }

int main(){

    string s="a123bc34d8ef34";
    cout<<numDifferentIntegers(s);
    return 0;
}