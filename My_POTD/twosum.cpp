#include <bits/stdc++.h>
#define el endl;
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++){
          auto it=mp.find(target-nums[i]);
          if (it!=mp.end()){
            arr.push_back(i);
            arr.push_back(mp[target-nums[i]]);
            return arr;
          }
          else mp[nums[i]]=i;  
        }
        return arr;
        
}

//https://leetcode.com/problems/two-sum/