#include <bits/stdc++.h>
using namespace std;


bool buddyStrings(string s, string goal){
    if (s.size() != goal.size())return false;
    else if(s==goal){
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        for(auto it:mp){
            if(it.second>=2)return true;
        }
        return false;
    }
    else{
    int first=-1,second=-1;
    for(int i = 0; i < s.size(); i++){
        if(s[i]!=goal[i] and first==-1){
            first=i;
        }
        else if(s[i]!=goal[i] and second==-1){
            second=i;
        }
        else if(s[i]!=goal[i])return false;
    }
    if(first==-1 or second==-1)return false;
    else if(s[first]==goal[second] and s[second]==goal[first])return true;
    else return false;
    }
}

int main()
{

    return 0;
}
