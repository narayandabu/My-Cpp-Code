#include <bits/stdc++.h>
using namespace std;
    
    
int minIncrementForUnique(vector<int>& nums) {
    int ct{0},size= nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0; i < size; i++){
        if(nums[i]==nums[i+1]){
            nums[i]++;
            ct++;
        }
    return ct;
    }
}