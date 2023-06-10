#include <bits/stdc++.h>
using namespace std;
 
 
 
 
bool kLengthApart(vector<int>& nums, int k) {
    int size=nums.size(),ct=0,ct1=0;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(nums[j]==1 and nums[i]){
                if(j-1>=k)ct1++;
            }
        }   
    }
    return ct1;


    }