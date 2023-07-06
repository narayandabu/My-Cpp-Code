#include <bits/stdc++.h>
using namespace std;
 
 
 
vector<string> removeAnagrams(vector<string>& words) {
    vector<string> ans;
    int size=words.size(),i{0},k{1},flag=0;
    if(words.size()==1)return words;
        while(i!=size-1 or k!=size-1){
        set<char> st1,st2;
        for(int j=0;j<words[i].size();j++){
            st1.insert(words[i][j]);
        }
        for(int j=0;j<words[k].size();j++){
            st2.insert(words[k][j]);
        }
        if(st1!=st2){
            if(flag){
                ans.push_back(words[i]);
                flag=0;
            }
            ans.push_back(words[k]);
            i=k;
            k++;
        }
        else{
            if(!flag){ans.push_back(words[i]);flag=1;}
            k++;
        }
    }
    return ans;
}