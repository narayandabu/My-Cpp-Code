#include <bits/stdc++.h>
using namespace std;
 
 
 
    int countElements(vector<int>& nums) {
        int size=nums.size(),maxi{INT_MIN},mini{INT_MAX},ct{0};
        for (int i = 0; i < size; i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        for(int i:nums)if(nums[i]==mini or nums[i]==maxi)ct++;
        return size-2-ct;
    }




