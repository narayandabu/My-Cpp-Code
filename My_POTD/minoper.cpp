#include <bits/stdc++.h>
using namespace std;




int minOperations(vector<int>& nums) {
    int ct{0};
    
    for (int i = 0; i < nums.size()-1; i++){
        if(nums[i]>=nums[i+1]){
            int temp=nums[i]-nums[i+1]+1;
            ct+=temp;
            nums[i+1]+=temp;  
        }
    }
    return ct;
}
// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/