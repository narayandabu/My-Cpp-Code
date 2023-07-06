#include <bits/stdc++.h>
using namespace std;
 
 
 
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> rw,cl;
        long long size=matrix.size(),sum=0;
        for(int i = 0; i < size; i++){
           rw.clear();
           cl.clear();
           for(int j = 0; j < size; j++){
                if(rw.find(matrix[i][j])!=rw.end())return false;
                else rw.insert(matrix[i][j]);
            }
            for (int j = 0; j < size; j++){
                if(rw.find(matrix[j][i])!=rw.end())return false;
                else rw.insert(matrix[j][i]);
            }
        }
        return true;
    }