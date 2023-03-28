#include <bits/stdc++.h>
#define el endl;
using namespace std;



int majority_Element(vector<int>& nums){
    int major{INT_MIN},size=nums.size(),count{0};
    for (int i = 0; i < size; i++){
      if(major!=nums[i] and count==0){
        major=nums[i];
        count++;
      }
      else if (major==nums[i]) count++;
      else count--;
    }
    return major;
}
int majority_element(vector<int>& nums){
    map<int,int> fqtable;
    int size=nums.size(),counter{0},majority{0};
    for(int i = 0; i < size; i++){
      if(fqtable.find(nums[i])==fqtable.end()){
          fqtable.insert(nums[i],0);
        }
      else fqtable[nums[i]]++;
    }
    for(auto it : fqtable){
      if((it.second)>counter){
          majority=it.first;
          counter=it.second;
        }
    }
    return majority;
}

//https://leetcode.com/problems/majority-element/