#include <bits/stdc++.h>
using namespace std;
 

//https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
    bool chkincstk(stack<int>& s){
        int frst=s.top();
        s.pop();
        while(!s.empty()){
            if(frst>s.top()){
                frst=s.top();
                s.pop();
            }
            else{return false;}
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
    stack<int> consider,not_consider;
    bool flag=false;
    consider.push(nums[0]);not_consider.push(nums[0]);
    for(int i=1;i<nums.size();i++){
        if(nums.at(i)>consider.top()){
            consider.push(nums.at(i));
            not_consider.push(nums.at(i));
        }
        else if(nums.at(i)<=consider.top() and !flag){
            consider.pop();
            consider.push(nums.at(i));
            flag=true;
        }
        else return false;
    }
    bool ans=nums.size()-consider.size()<=1 and (chkincstk(consider) or chkincstk(not_consider));
    return ans;
    }