#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> v(2); 
    unordered_map<int,int> m;
    for (int i:nums1)m[i]=1;
    for (int i = 0; i < nums2.size(); i++){
        auto it=m.find(nums2[i]);
        (it!=m.end()and(*it).second!=2)?m[nums2[i]]=-1:m[nums2[i]]=2;
    }
    for(auto it:m){
        if(it.second==1)v[0].push_back(it.first);
        else if(it.second==2)v[1].push_back(it.second);
    }
    return v;
}
//https://leetcode.com/problems/find-the-difference-of-two-arrays/description/