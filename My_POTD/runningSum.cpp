#include <bits/stdc++.h>
#define el endl;
using namespace std;


vector<int> runningSum(vector<int>& nums){
    
    for (int i = 1; i < nums.size(); i++){
      nums[i]+=nums[i-1];
    }
    return nums;       
}