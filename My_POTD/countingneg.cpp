#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int negct{0},high{0},low{0},mid{0};
    for (int i = 0; i < grid.size(); i++){
      high=grid[i].size()-1;
      if(grid[i][high]>=0)continue;
      low=0;
      mid=0;
     while(high>low){
       mid=(high+low)/2;
      if(grid[i][mid]<0){
        high=mid;
      } 
      else low=mid+1;
      }
      negct+=grid[i].size()-high;
    }
    return negct;
    }
    //https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/