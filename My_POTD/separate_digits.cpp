#include <bits/stdc++.h>
#define el endl;
using namespace std;




vector<int> separateDigits(vector<int>& nums) {
    vector<int> ans;
    vector<int> temmp;
    ans[0]=0;
    int size=nums.size(),temp{0},modulo{0};
    for (int i = 0; i < size; i++){
      temp=nums[i];
      while(temp!=0){
        modulo=temp%10;
        temmp.insert(temmp.end(),modulo);
        temp/=10;
      }
      ans.insert(ans.begin(),temmp.begin(),ans.end());
      temmp.clear();
    }
    return ans;  
}