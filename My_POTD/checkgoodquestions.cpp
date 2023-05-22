#include <bits/stdc++.h>
using namespace std;

    
//https://leetcode.com/problems/check-if-it-is-a-straight-line/
bool checkStraightLine(vector<vector<int>>& coordinates) {
        
    float size=coordinates.size();
    for(int i = 1; i < size; i++){
        float x1xOyOy=(coordinates[0][1]-coordinates[1][1])*(coordinates[0][0]-coordinates[i][0]);
        float xOxyOy1=(coordinates[0][1]-coordinates[i][1])*(coordinates[0][0]-coordinates[1][0]);
        if(x1xOyOy!=xOxyOy1)return false;
    }
    return true;


}