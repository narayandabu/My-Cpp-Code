#include <bits/stdc++.h>
using namespace std;
#define el endl
 

vector<int> buildArray(vector<int>& nums) {
      vector<int> temp;
      for (int i = 0; i < nums.size(); i++)
      {
        temp.push_back(nums[nums[i]]);
      }
      
      return temp;
    }

//https://leetcode.com/problems/build-array-from-permutation/