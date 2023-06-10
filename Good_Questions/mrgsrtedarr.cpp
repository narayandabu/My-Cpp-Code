#include <bits/stdc++.h>
using namespace std;
#define d cout<<"d\n";

//Two-pointer
//https://leetcode.com/problems/merge-sorted-array/description/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int i{m-1},j{n-1},k{n+m-1};
    while(i>=0 and j>=0){
        if(nums1[i]<nums2[j]){
            nums1[k]=nums2[j];
            k--;j--;
        }
        else{
           nums1[k]=nums1[i];
           i--;k--;
        }
    }
    for(j;j>=0;j--){
        nums1[k] = nums2[j];
        k--;
    }
    
}
