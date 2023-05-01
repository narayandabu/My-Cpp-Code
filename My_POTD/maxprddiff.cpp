#include <bits/stdc++.h>
using namespace std;

int maxProductDifference(vector<int>& nums) {
        
int max{INT_MIN},prevmax{INT_MIN},prevmin{INT_MAX},min{INT_MAX};
    for (int i:nums){
        if(i>=max){
            prevmax=max;
            max=i;
        }
        if(i<=min){
            prevmin=min;
            min=i;
        }
    }
    return max*prevmax-min*prevmin;
}