#include <bits/stdc++.h>
using namespace std;
#define hi cout<<"hi\n";
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        vector<int> ans;
        unordered_map<int,int> m;
        int size2=nums2.size();
        for(int i = 0; i < size2; i++){
            for (int j = i+1; j <size2; j++){
                if(nums2[j]>nums2[i]){
                    m[nums2[i]]=nums2[j];
                    break;
                }
                if(j==size2-1)m[nums2[i]]=-1;
            }    
        }
        m[nums2[size2-1]]=-1;
        for (int i:nums1)ans.push_back(m[i]);
        return ans;
}