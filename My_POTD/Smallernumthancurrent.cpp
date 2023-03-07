#include <bits/stdc++.h>
using namespace std;
#define el endl


vector<int> smallerNumbersThanCurrent(vector<int>& nums){
    int size=nums.size();
    vector<int> soln;
    int hash_arr[101]={0};
    for (int i = 0; i <size; i++){hash_arr[nums[i]]++;}
    for (int i = 1; i < 101; i++){hash_arr[i]+=hash_arr[i-1];}
    for (int i = 0; i < size; i++){
        if (hash_arr[i]==0){soln.push_back(0);}
        else{soln.push_back(hash_arr[nums[i]-1]);}
    }
    return soln;
}

//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/