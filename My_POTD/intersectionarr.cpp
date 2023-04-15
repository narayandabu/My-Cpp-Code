#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     int size1=nums1.size(),size2=nums2.size();
     unordered_set<int> s;
      vector<int> ans;
      for(int i=0;i<size1;i++){
        s.insert(nums1[i]);
      }
      for (int i = 0; i < size2; i++){
        if(s.find(nums2[i])!=s.end()){
          ans.push_back(nums2[i]);
          s.erase(s.find(nums2[i]));
        }
      }
      return ans;
    }

