#include <bits/stdc++.h>
using namespace std;
#define el endl




vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    
    int size=nums.size();
    int max{0};
    vector<int> soln;
    for (int i = 0; i < size; i++)
    {
        if (nums[i]>max)
        {
            max=nums[i];
        } 
    }
    int hash_arr[max+1]{0};
    for (int i = 0; i <size; i++)
    {
        hash_arr[nums[i]]++;
    }
    for (int i = 1; i < max; i++)
    {
        hash_arr[i]+=hash_arr[i-1];
    }
    for (int i = 0; i < size; i++)
    {
        if (hash_arr[i]==0)
        {
            soln.push_back(0);
        }
        else
        {
            soln.push_back(hash_arr[nums[i]-1]);
        }
        
    }

    return soln;
    





}