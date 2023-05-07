#include <bits/stdc++.h>
using namespace std;



int findLengthOfLCIS(vector<int>& nums) {

    int size=nums.size(),ct{0},ans{1};
    for (int i = 0; i < size-1; i++){
            if(nums[i]<nums[i+1])ct++;
            else ct=0;
            ans=max(ans,ct);
    }
    return ans;


}



//https://leetcode.com/problems/longest-continuous-increasing-subsequence/