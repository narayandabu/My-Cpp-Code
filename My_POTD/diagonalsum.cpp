#include <bits/stdc++.h>
#define el endl;
using namespace std;


int diagonalSum(vector<vector<int>>& mat) {
        int sum{0};
        int size=mat[0].size();
         for (int i = 1; i <= size; i++){
            sum+=mat[i-1][i-1]+mat[i-1][size-i];
          }
          if (mat[0].size()%2!=0){
            sum-=mat[size/2][size/2];
          }
        return sum;
}
//https://leetcode.com/problems/matrix-diagonal-sum/