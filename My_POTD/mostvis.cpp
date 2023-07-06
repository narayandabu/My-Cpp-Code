#include <bits/stdc++.h>
using namespace std;
 
// void add1(vector<int> &v,int st,int ed,int k){
//     if(k==1){
//         while(st!=(ed+1)){
//             v[st]++;
//             st++;
//             if(st>(v.size()-1))st=1;
//         }
//     }
//     else{
//         st++;
//         if(st>(v.size()-1))st=1;
//         while(st!=(ed+1)){
//             v[st]++;
//             st++;
//             if(st>(v.size()-1))st=1;
//         }
//     }
// }
// vector<int> mostVisited(int n, vector<int>& rounds) {
//     vector<int> v(n+1,0),ans;
//     v.push_back(-1);
//     int size=rounds.size(),size2=v.size();
//     for(int i=1;i<size;i++){
//         add1(v,rounds[i-1],rounds[i],i);
//     }
//     int maxi= *max_element(v.begin(),v.end());
//     for(int i=1;i<size2;i++){
//         if(v[i]==maxi){
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }
vector<int> mostVisited(int n, vector<int>& rounds) {
    int st=rounds[0],end=rounds[rounds.size()-1];
    if(end>=st){
        vector<int> v(end-st+1);
        for(int i=0;i<v.size();i++){
            v[i]=(st+i);
        }
        return v;
    }
    else{
        vector<int> v(end-st+1+n);
        int i=0;
        for(;i<end;i++){
            v[i]=i+1;
        }
        for(int j=0;i<v.size();i++){
            v[i]=st + j++;
        }
        return v;
    }
}

int main(){
    vector<int> rd{1,3,5,7};
    vector<int> v=mostVisited(7,rd);
    for(int i:v){
        cout<<i<<" ";
    }


}