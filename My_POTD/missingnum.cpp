#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
 //***bruteforce O(n^2) time comp and O(n) space comp gives TLE also :)***
      int n=nums.size();
      vector<int> v;
      for (int i = 0; i <= n; i++){
            v.push_back(i);
      }
      for (int i=0;i<nums.size();i++){
          for (int j=0;j<v.size();j++) {
            if(nums[i]==v[j])v.erase(v.begin()+j);
          }
      }
      return v[0];
      //More optimised O(n) time comp and O(n) space comp
      int n=nums.size();
      set<int> temp;
      for(int i=0;i<=n;i++){
        temp.insert(i);
      }
      for(auto it:nums){
        if(temp.find(it)!=temp.end())temp.erase(it);
      }
      return *(temp.begin());
      //Optimized O(n) time comp and O(1) space comp
      int size=nums.size();
      int max=((size)*(size+1))/2;
      bool is_zero=false;
      for (int it:nums){
            if(it==0)is_zero=true;
            max-=it;
      }
      if(!is_zero)return 0;
      return max;
//https://leetcode.com/problems/missing-number/submissions/
}