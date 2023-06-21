#include <bits/stdc++.h>
using namespace std;
#define nl "\n" 
#define de(x) cout<<x<<nl;
#define forn for(int i=0;i<n;i++)
#define forv for(int i=0;i<v.size();i++)
#define sortv sort(v.begin(),v.end())
#define vecv vector<int> v
#define ll long long
#define lld unsigned long long
#define fora(i,n,k) for(int i=k;i<n;i++)
#define txtio freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int md=1e9+7;

bool isvowel(char ch){return ch=='a' or ch=='e' or ch=='i' or ch=='o' or 'u';}
long long factorialmd(long long n){
    long long i=1,ans=1;
    for(;i<=n;i++){
        ans=(ans%md*i%md)%md;
    }
    return ans;
}
long long ncr(int n,int r){return (long long)factorialmd(n)/((factorialmd(r)*factorialmd(n-r))%md);}

 
 
 
 
void solve(){
        
    cout<<factorialmd(42);
 
 
  return;
}
 
int main(){
      fastIO;
      //txtio;
      int t=0;
      cin>>t;
      while(t--){
         solve();
 
 
      }
      return 0;
}