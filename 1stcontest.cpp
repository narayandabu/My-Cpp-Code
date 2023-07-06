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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int md=1e9+7;
 
 
 
 
 
void solve(){
        int x,y,i{0},ans{0};
        cin>>x>>y;

        for(i=1;i<=9;i++){
            if((x*i)%10==y or ((x*i)%10)==0){
                if((x*i)%10==y)ans=i;
                else ans=i;
                break;
            }
        }
        cout<<ans<<nl;
 
  return;
}
 
int main(){
      fast;
 
      //txtio;
      solve();
      return 0;
}