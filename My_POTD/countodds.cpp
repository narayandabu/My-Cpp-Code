#include <bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/submissions/

int countOdds(int low, int high) {
        
    if(low%2==0 and high%2==0)return (high-low)/2;
    else if(low%2!=0 and high%2!=0) return (high-low)/2+1;
    else return (high-low)/2+1;



}