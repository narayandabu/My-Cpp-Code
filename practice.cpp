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
 
 
int solve(int n,int k){
      if(n==0)return 0;
      if(n==k or n*2==k)return 1;
      return solve(n/3,k) or solve((n/3)*2,k);
}

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
            int n,k;
            bool flag=true;
            cin>>n>>k;
            if((n==1 and k==1))cout<<"YES\n";
            else if(k>n)cout<<"NO\n";
            else{
                  if(n%3==0){
                    if(solve(n,k)==1){
                        cout<<"YES\n";
                        flag=false;
                    }
                  }
                  if(flag)cout<<"NO\n";
            }
      }
      return 0;
}