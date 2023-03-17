#include <bits/stdc++.h>
#define el endl;
using namespace std;



int mostWordsFound(vector<string>& sentences) {
    int size=sentences.size();
    int prev_max_count{0},max_count{0};
    for (auto i:sentences){
      for (auto j:i){
        if (j==' '){
          prev_max_count++;
        }  
      }
      max_count=max(max_count,prev_max_count+1);
    }
    return max_count;
}
//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/