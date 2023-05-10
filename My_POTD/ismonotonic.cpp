#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool flag1=true,flag2=true;
    int size=nums.size();
    for (int i = 0; i < size-1; i++){
            if(nums[i]>nums[i+1])flag1=false;
            if(nums[i]<nums[i+1])flag1=false;
    }
    return (flag1==false and flag2==false)?false:true;
}