#include <bits/stdc++.h>
#define el endl;
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
        ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    int maxin{0},temp{0};
    for (int i = 0; i < accounts.size(); i++)
    {
      for (int j = 0; j < accounts[i].size(); j++){
        temp+=accounts[i][j];
      }
      maxin=max(maxin,temp);
    }
    return maxin;
}
//https://leetcode.com/problems/richest-customer-wealth/