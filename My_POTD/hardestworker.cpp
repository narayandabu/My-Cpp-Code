#include <bits/stdc++.h>
using namespace std;
 
 
// Brute Force
int hardestworker(int n,vector<vector<int>> & logs){
    vector<int> v(n,0);
    int size=logs.size(),maxi{INT_MIN},maxid{-1};
    v[logs[0][0]]=logs[0][1];
    for(int i=1;i<size;i++){
        v[logs[i][0]]=logs[i][1]-logs[i-1][1];
    }
    for(int i=0;i<size;i++){
        if(v[i]>maxi){
            maxid=i;
            maxi=v[i];
        }
    }
    return maxid;
}
// optimized
int hardestWorker(int n, vector<vector<int>>& logs) {
    int size=logs.size(),maxi{INT_MIN},maxid;
    maxi=logs[0][1];
    maxid=logs[0][0];
    for(int i=1;i<size;i++){
        if((logs[i][1]-logs[i-1][1])==maxi){
            maxid=(maxid<logs[i][0])?maxid:logs[i][0];
        }
        else if((logs[i][1]-logs[i-1][1])>maxi){
           maxi=logs[i][1]-logs[i-1][1];
           maxid=logs[i][0];
        }
    }
    return maxid;  
}