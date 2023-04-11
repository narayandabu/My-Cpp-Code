#include <bits/stdc++.h>
using namespace std;



int search(vector<int>& nums, int target) {
        int high{0},low{0},mid{0},size=nums.size();
        high=size;
        while(high>low){
          mid=(high+low)/2;
          if(nums[mid]>target )high=mid;
          else if(nums[mid]<target )low=mid+1;
          else return mid;
        }
        return -1;
}
//https://leetcode.com/problems/binary-search/