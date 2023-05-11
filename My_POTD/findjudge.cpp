#include <bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/find-the-town-judge/
int findJudge(int n, vector<vector<int>>& trust) {

    int size =trust.size(),judge{-1};
    vector<int> hash(n+1,0);
    for (int i = 0; i < size; i++){
        hash[trust[i][1]]++;
        if(hash[trust[i][0]]>0)hash[trust[i][0]]=0;
    }
    for (int i = 0; i < n+1; i++){
        if(hash[i]>0)return i;
    }
    return judge;
    
    



}