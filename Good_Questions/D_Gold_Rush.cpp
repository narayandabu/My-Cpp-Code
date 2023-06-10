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
#define txtio   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
 
// Dp,Recursion.
//https://codeforces.com/problemset/problem/1829/D
unordered_set<int> se;
void rec(int n,int k){
    if(n%3!=0 or se.find(n)!=se.end()){
        se.insert(n);
        return;
    }
    else{
        se.insert(n);
        rec(n/3,k);
        rec((n*2)/3,k);
    }
}


 
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    rec(n,k);
    if(se.find(k)!=se.end())cout<<"YES\n";
    else cout<<"NO\n";
  return;
}
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      //txtio;
      int t=0;
      cin>>t;
      while(t--){
        se.clear();
        solve();
      }
      return 0;
}