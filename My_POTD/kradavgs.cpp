#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/k-radius-subarray-averages/
//Bruteforce
vector<int> getAverages(vector<int>& nums, int k) {
    long long size=nums.size(),sum;
    vector<int> ans(size,-1);
    if(k+1>size)return ans;
    else{
        for(int i=0; i < size; i++){
            sum=0;
            if(i>=k and i<=(size-k-1)){
                for(int j=(i-k); j<=(i+k); j++){
                    sum+=nums[j];
                }
                ans[i]=(sum/((2*k)+1));
            }
        }
    }
    return ans;
}
// Optimal
vector<int> getAverages(vector<int>& nums, int k) {
    int size=nums.size(),sum{0},j{-1};
    vector<int>ans(size,-1);
    if(k+1>size)return ans;
    else{
        for(int i=0;i<size;i++){
            sum+=nums[i];
            if(i>=2*k){
                if(j>=0)sum-=nums[j];
                ans[i-k]=(sum/((2*k)+1));
                j++;
            }
        }
        return ans;
    }
}
