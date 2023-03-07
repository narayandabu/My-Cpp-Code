#include <bits/stdc++.h>
#define el endl;
using namespace std;



int pivotInteger(int n){
    int out{0};
    out=(int)sqrt(n*(n+1)/2);
    if((out*out)==(n*(n+1)/2))return out;
    else return -1;
}
//https://leetcode.com/problems/find-the-pivot-integer/description/