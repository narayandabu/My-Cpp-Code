#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/



int largestSumAfterKNegations(vector<int>& nums, int k) {
    int size=nums.size(),neg{0},val{0};
    bool has_zero=false;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < size; i++){
        if(nums[i]<=0 and k>0){
            neg++;
            nums[i]*=-1;
            k--;    
        }
        if(nums[i]==0)has_zero=true;
        }
    sort(nums.begin(),nums.end());
    if(nums[0]>=0 and k>0)if(!has_zero)nums[0]=nums[0]*pow(-1,k);
    for (int i:nums)val+=i;
    return val;
}