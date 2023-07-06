#include <bits/stdc++.h>
using namespace std;
 
 
bool letscomp(vector<int> a,vector<int> b){
    return a[1]>=b[1];
}
int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    int ans{0};
    sort(boxTypes.begin(),boxTypes.end(),letscomp);
    vector<int> i;
    for(vector<int> i:boxTypes){
        if(truckSize<i[0]){
            ans+=(i[0]*i[1]);
            truckSize-=i[0];
        }
        else{ans+=truckSize*i[1];break;}
    }
    
    return ans;



}