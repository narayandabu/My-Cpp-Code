#include <bits/stdc++.h>
using namespace std;
 
 
 
bool isitrllyposs(string&str,unordered_map<char,int> mp){
        for(char ch:str){
            if(mp.find(ch)==mp.end()){
                return false;
            }
            else if(mp[ch]<1){
                return false;
            }
            else mp[ch]--;
        }  
        return true;
}
int countCharacters(vector<string>& words, string chars) {
    int flag=0,sum{0};
    unordered_map<char,int> mp;
    for(char ch:chars)mp[ch]++;
    for(string str:words){
        if(isitrllyposs(str,mp))sum+=str.size();
    }
    return sum;
}