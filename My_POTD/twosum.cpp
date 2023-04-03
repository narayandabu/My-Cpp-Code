#include <bits/stdc++.h>
#define el endl;
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
   unordered_map<int,int> mp;
    for (int i = 0; i < nums.size(); i++){
      auto it=mp.find(target-nums[i]);
      int other=target-nums[i];
      if (it!=mp.end()) return{mp[other],i};
      else mp[nums[i]]=i;  
    }
    return { };
}

//https://leetcode.com/problems/two-sum/