#include <bits/stdc++.h>
using namespace std;
int countPairs(vector<int>& nums, int k) {
    int ct{0},n=nums.size();
    unordered_map<int,vector<int>> m;
    for (int i = 0; i < n; i++){
        if(m.find(nums[i]) != m.end()){
            for(int x : m[nums[i]]) 
                if((i * x) % k == 0)
                ct++;
        }
        m[nums[i]].push_back(i);
    }
    return ct;   
}



    //https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
int main(){
    vector<int> v{3,1,2,2,2,1,3};
    countPairs(v,2);
    return 0;
}