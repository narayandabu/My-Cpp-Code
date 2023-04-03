#include <bits/stdc++.h>
using namespace std;

char repeatedCharacter(string s) {
        int arr[101]={};
        char ans;
        for (int i = 0; i < s.size(); i++){
            ans=s.at(i);
            arr[ans-'a']++;
            if(arr[ans-'a']>1){
                ans='a'+i;
                return ans;
            }
        }
}
// https://leetcode.com/problems/first-letter-to-appear-twice/