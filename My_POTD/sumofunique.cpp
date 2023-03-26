#include <bits/stdc++.h>
#define el endl;
using namespace std;

int sumOfUnique(vector<int>& nums) {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int arr[101]{0};
      int size=nums.size(),sum{0};
      for (int i = 0; i < size; i++){
          arr[nums[i]]++;
      }
      for (int i = 0; i < 101; i++){
            if (arr[i]==1)sum+=i;
            arr[i]=0;
      }
      return sum;     
}
//https://leetcode.com/problems/sum-of-unique-elements/