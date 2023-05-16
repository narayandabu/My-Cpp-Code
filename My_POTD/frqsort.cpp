#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int>m;
bool tochange(int a,int b){
    if((*m.find(a)).second==(*m.find(b)).second){
        return (*m.find(a)).first>(*m.find(b)).first;
    }
    cout<<a<<" "<<b<<"\n";
    return ((*m.find(a)).second<(*m.find(b)).second); 
}
vector<int> frequencySort(vector<int>& nums) {
    for(int i:nums)m[i]++;
    sort(nums.begin(),nums.end(),tochange);

    return nums;
    }

main(){
    vector<int> v{2,3,1,3,2};
    frequencySort(v);
    for(int i:v)cout<<i<<" ";
}