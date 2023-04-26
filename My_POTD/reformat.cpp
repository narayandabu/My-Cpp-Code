#include <bits/stdc++.h>
using namespace std;


string reformat(string s) {
    int num{0},ch{0};
    string ans;
    for (char c:s){
        
        if(isalpha(c))ch++;
        if(isdigit(c))num++;
    }
    if(num==0 or ch==0 or abs(num-ch)>1)return "";
    sort(s.begin(),s.end());
    int i{0},j{0};
    if(num>ch){
       i=0,j=s.size()/2 +1;
       while(j<s.size()){
        ans.push_back(s.at(i));
        ans.push_back(s[j]);
        i++;
        j++;
        }
        ans.push_back(s[i]);
    }
    else{
        i=s.size()/2,j=0;
      while(j<s.size()/2){
        ans.push_back(s[i]);
        ans.push_back(s[j]);
            i++;
            j++;
        }
        if(num!=ch)ans.push_back(s[i]);
    }
    return ans;
    }
    
//https://leetcode.com/problems/reformat-the-string/submissions/