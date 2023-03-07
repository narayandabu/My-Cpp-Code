#include <bits/stdc++.h>
#define el endl;
using namespace std;

int differenceOfSum(vector<int>& nums){
        int size=nums.size();
        int digitsum{0};
        int sum{0};
        for (int i = 0; i < size; i++){
            int temp=nums[i];
            sum+=nums[i];
            digitsum+=nums[i]%10;
            while (temp>0)
            {
                temp/10;
                digitsum+=temp%10;
            }
            
        }    
        return sum-digitsum;

}
//https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/