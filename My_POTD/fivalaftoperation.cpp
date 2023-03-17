#include <bits/stdc++.h>
#define el endl;
using namespace std;

int finalValueAfterOperations(vector<string>& operations){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int ans{0};
      for (int i = 0; i < operations.size(); i++){
        if(operations.at(i).at(1)=='+')ans++;
        else ans--;
      }
      return ans;
}

//https://leetcode.com/problems/final-value-of-variable-after-performing-operations/