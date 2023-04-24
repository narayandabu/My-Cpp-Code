#include <bits/stdc++.h>
using namespace std;
 


int gcd(int a,int b){
    if(a==0)return b;
    return gcd(max(a,b)%min(a,b),min(a,b));
}
int findGCD(vector<int>& nums) {

    int maxnum=INT_MIN,minnum=INT_MAX;
    for (int i:nums){
        maxnum=max(maxnum,i);
        minnum=min(minnum,i);
    }
    return __gcd(maxnum,minnum);
}
