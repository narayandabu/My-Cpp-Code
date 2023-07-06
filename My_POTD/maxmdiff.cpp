#include <bits/stdc++.h>
using namespace std;
 
 
//https://leetcode.com/problems/maximum-difference-between-increasing-elements/

int maximumDifference(vector<int>& nums) {
    int maxi=-1,size=nums.size(),ans=-1;
    vector<int> maxmarr(size-1);
    for(int i=size-1;i>0;i--){
        maxmarr[i-1]=max(nums[i],maxi);
        maxi=maxmarr[i-1];
    }
    for(int i=0;i<size-1;i++){
        if(nums[i]<maxmarr[i])ans=max(maxmarr[i]-nums[i],ans);
    }
    return ans;
}