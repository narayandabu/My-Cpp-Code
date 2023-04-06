#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<vector<int>>& nums){
      map<int,int> m;
      vector<int> v;
      for (int i = 0; i < nums.size()-1; i++){
        for (int j = 0; j < nums[i].size() ; j++){
          if(m.find(nums[i][j])!=m.end())m[nums[i][j]]--;   
          else m[nums[i][j]]++;
        }  
      }
      for (auto it : m)if(it.second==2-nums.size())v.push_back(it.first);
      
      return v;
}