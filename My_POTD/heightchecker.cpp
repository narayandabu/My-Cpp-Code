#include <bits/stdc++.h>
using namespace std;




int heightChecker(vector<int>& heights) {
     int size=heights.size(),ct{0};   
    vector<int> expected;
    expected=heights;
    sort(expected.begin(),expected.end());
    for (int i = 0; i < size; i++)if(heights[i]!=expected[i])ct++;
    return ct;


}