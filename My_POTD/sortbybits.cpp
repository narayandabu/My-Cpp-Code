#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/submissions/
bool i_think_i_should_swap(int a,int b){

    if(__builtin_popcount(a)==__builtin_popcount(b))return a<b;
    return  __builtin_popcount(a)<__builtin_popcount(b);
}   
vector<int> sortByBits(vector<int>& arr) {
    sort(arr.begin(),arr.end(),i_think_i_should_swap);
    return arr;
    }