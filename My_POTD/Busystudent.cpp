#include <bits/stdc++.h>
using namespace std;
    
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int size=startTime.size(),ct{0};
        for(int i=0;i<size;i++)if(startTime[i]<=queryTime and endTime[i]>=queryTime)ct++;
        return ct;
    }

//https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/description/