#include <bits/stdc++.h>
using namespace std;

int maximumCount(vector<int>& nums) {
    int mid{0},high=nums.size()-1,low{0};
    if(nums[0]>0)return nums.size()-1;
    while(high>low){
      mid=(high+low)/2;
      if(nums[mid]>0){
        high=mid;
      }
      else low=mid+1;
    }
    int pos=nums.size()-high;
    mid=0;
    high=nums.size()-1;
    low=0;
    while(high>low){
      mid=(high+low)/2;
      if(nums[mid]<=0){
        low=mid+1;
      }
      else high=mid;
    }
    int neg=high+1;
    if(nums[pos-1]==0 and nums[neg+1]==0)return 0;
    return max(neg,pos);
  }
  //https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/