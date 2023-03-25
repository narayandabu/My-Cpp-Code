#include <bits/stdc++.h>
using namespace std;
#define el endl

int mod(int x){
    if(x>=0)return x;
    else return -1*x;
}
vector<int> leftRigthDifference(vector<int>& nums) {
        
        vector<int> ans;
        int size=nums.size(),temp{0},prefix{0};
        vector<int> prefix_sum;
        vector<int> leftsum;
        vector<int> rightsum;
        leftsum[0]=0;
        for (int i = 1; i < size-1; i++)
        {
            leftsum[i]=leftsum[i-1]+nums[i]; 
        }
        for (int i = 0; i < size-1; i++){
            rightsum.insert(rightsum.begin(),temp);
            temp+=nums[size-1-i];
        }
        for (int i = 0; i < size; i++)
        {
            ans[i]=mod(rightsum[i]-leftsum[i]);
        }
        return ans;
}
//https://leetcode.com/problems/left-and-right-sum-differences/