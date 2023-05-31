#include <bits/stdc++.h>
using namespace std;



bool findSubarrays(vector<int>& nums) {
     unordered_map<int,int> m;
     for(int i=0; i<nums.size()-1; i++ ){
        m[nums[i] + nums[i+1]]++;
        if( m[nums[i] + nums[i+1]] >= 2 ){
            return true;
        }
     }
     return false;
    }