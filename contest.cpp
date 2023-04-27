#include <bits/stdc++.h>
using namespace std;
#define el endl
 
 
#define nl "\n" 
#define d cout<<"debug"<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
 
 
 
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
           lld x;
           cin>>x;
           if(x<=100){
           if(x<=1)cout<<-1<<nl;
           else cout<<"1 "<<x-1<<" 1"<<nl; 
           }
           else{
            int sq=sqrt(x-1);
            int l=x-sq*sq;
            cout<<sq<<" "<<sq<<" "<<l<<nl;
           }
      }
      return 0;
}
