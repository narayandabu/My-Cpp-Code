#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
int closetTarget(vector<string>& words, string target, int startIndex) {
    int flag=0,size=words.size(),mindist{INT_MAX};
    vector<int> v;
    for (int i = 0; i < size; i++){
        if(words[i]==target){
            v.push_back(i);
            flag=1;
        }
    }
    for(int i:v){
        int right=abs(i-startIndex);
        int left=size-right;
        mindist=min({mindist,right,left});
    }
    return (flag==0)?-1:mindist;

    
    


    }