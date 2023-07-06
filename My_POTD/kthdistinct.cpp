#include <bits/stdc++.h>
using namespace std;
 
 
 //https://leetcode.com/problems/kth-distinct-string-in-an-array/description/
    string kthDistinct(vector<string>& arr, int k) {
        int size=arr.size(),x{0},kth;
        unordered_map<string,int> m;
        for(int i=0;i<size;i++){
            if(m.find(arr[i])!=m.end())m[arr[i]]=-1;
            else m[arr[i]]=i;
        }
        for(int i=0;i<size;i++){
            if((*m.find(arr[i])).second!=-1)m[arr[i]]=++x;
        }
        for(auto it:m)if(it.second==k)return it.first;
        return "";
    }