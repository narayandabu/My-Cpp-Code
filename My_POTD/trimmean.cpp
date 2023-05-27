#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/mean-of-array-after-removing-some-elements/

double trimemean(vector<int>& arr){
        double size=arr.size(),i,n,ans=0;
        i=size/20;
        n=(size-i-1);
        sort(arr.begin(),arr.end());
        for(int j=i;j<=n;j++)ans+=arr[j];
        ans/=n-i+1;
        return ans;
}
