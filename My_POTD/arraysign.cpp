#include <bits/stdc++.h>
#define el endl;
using namespace std;




int arraySign(vector<int>& nums){
        int sign{0};
        for (int i = 0; i < nums.size(); i++){
          if (nums.at(i)==0){
            return 0;
          }
          else if(nums.at(i)<0)sign++;
        }
        if (sign&1)return -1;
        return 1;
}

//https://leetcode.com/problems/sign-of-the-product-of-an-array/