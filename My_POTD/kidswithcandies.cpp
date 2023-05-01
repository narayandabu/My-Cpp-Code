#include <bits/stdc++.h>
using namespace std;



vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxi{INT_MIN};
    vector<bool> ans;
    for(int i:candies)if(i>=maxi)maxi=i;
    for(int i:candies)(i+extraCandies>=maxi)?ans.push_back(true):ans.push_back(false);
    return ans;
}

