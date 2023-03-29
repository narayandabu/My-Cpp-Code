#include <bits/stdc++.h>
#define el endl;
using namespace std;



bool isAnagram(string s, string t) {
    int arr[27]={};
    int sizeS=s.size(),sizeT=t.size();
    if(sizeS!=sizeT)return false;
    for (int i = 0; i < sizeS; i++){
      arr[s.at(i)-'a']++;
      arr[t.at(i)-'a']--;
    }
    for (int i = 0; i < 27; i++){
      if(arr[i]!=0)return false;
    }
    return true;
}
//https://leetcode.com/problems/valid-anagram/description/