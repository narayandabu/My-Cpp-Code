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
 
 
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
            bool pos=true,neg=true;
            int n;
            cin>>n;
            vecv;
            forn{
                  int temp;
                  cin>>temp;
                  v.push_back(temp*pow(2,i));
                  if(temp>0)neg=false;
                  if(temp<0)pos=false;
            }
            sort(v.begin(),v.end());
            if(n==1)cout<<1<<nl;
            else if(pos or neg)cout<<n*(n+1)/2<<nl;
            else cout<<abs(v[n-1]+v[0])<<nl;
      }
      return 0;
}