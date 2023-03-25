#include <bits/stdc++.h>
using namespace std;
#define el endl

int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        return ((nums[size-1]-1) * (nums[size-2]-1));
}


//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/