#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/greatest-common-divisor-of-strings/submissions/

string gcdOfStrings(string str1, string str2){
    string ans;
    int size=__gcd(str2.size(),str1.size()),j=str1.size()-1,k=str2.size()-1;
    if(str1.size()>=str2.size()){
        while(str1.size()!=0){k=str2.size()-1;for(int i=0;i<size;i++){if(str2[k]==str1[j])str1.pop_back();else return "";j--;k--;}}
    }
    else{
        while(str2.size()!=0){j=str1.size()-1;for(int i=0;i<size;i++){if(str2[k]==str1[j])str2.pop_back();else return "";j--;k--;}}
    }
    if(str1.size()>=str2.size())for(int i = 0; i < size; i++)ans.push_back(str1.at(i));
    else for(int i = 0; i < size; i++)ans.push_back(str2.at(i));
    return ans;
}