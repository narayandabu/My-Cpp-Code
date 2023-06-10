#include <bits/stdc++.h>
using namespace std;
#define nl "\n" 
#define d cout<<"debug"<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
#define fora(i,n,k) for(int i=k;i<n;i++)


//implementation,prefixsum.
//https://codeforces.com/contest/278/problem/A
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r,temp,l,n;
    vector<int> v,prefixsum,postfixsum;
    cin>>n;
    forn{
        cin>>temp;
        v.push_back(temp);
    }
    prefixsum.push_back(0);
    postfixsum.push_back(0);
    for(int i=1;i<n;i++){
       temp=v[i-1];
       prefixsum.push_back(prefixsum[i-1]+temp);
    }
    for(int i=n;i>1;i--){
        temp=v[i-1];
        postfixsum.push_back(postfixsum[n-i]+temp);
    }
    cin>>r>>l;
    if(r==l)cout<<0<<nl;
    else{
        int back{0},front{0},x=min(l,r),y=max(l,r);
        back=postfixsum[n-y+1]+prefixsum[x-1];
        front=prefixsum[y-1]-prefixsum[x-1];
        cout<<min(back,front);
    }
    return 0;
}