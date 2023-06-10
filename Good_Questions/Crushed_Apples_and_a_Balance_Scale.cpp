#include <bits/stdc++.h>
using namespace std;
#define nl "\n" 
#define d cout<<"debug\n";
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
#define fora(i,n,k) for(int i=k;i<n;i++)
 
//maths.
//https://www.codechef.com/problems/APP_BAL_SCA
 
bool is_poss(lld n,lld q){
    while(n%2==0)n/=2;
    if(n>q)return false;
    return (q%n)?false:true;
}
void solve(){
    lld n,q;
    cin>>n>>q;
    if(q>n){
        cout<<"NO\n";
        return;
    }
    (is_poss(n,q))?cout<<"YES\n":cout<<"NO\n";
    return;
}   
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t=0;
      cin>>t;
      while(t--){
            solve();
      }
      return 0;
}