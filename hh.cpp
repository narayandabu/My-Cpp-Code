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
          
 
 
 
  return;
}
long long contributions(int n,vector<int> a){
    long long sum{0};
    unordered_map<int,vector<int>> mods;
    for(int i=0;i<n;i++){
        if(mods.find(a[i]%3)!=mods.end()){
            int l=mods[a[i]%3].size();
            for(int k=0;k<l;k++){
            mods[a[i]%3].push_back(a[i]^mods[a[i]%3][k]);
            }
        }
        else mods[a[i]%3].push_back(a[i]);
    }
    for(auto it:mods){
        if(it.second.size()>1){
            for(int i:it.second){
                sum+=i;
            }
        }
    }
    return sum;

}
long long contributions(int n, vector<int> &a) {
 long long sum{0};
    unordered_map<int,vector<int>> mods;
    for(int i=0;i<n;i++){
        if(mods.find(a[i]%3)!=mods.end()){
            mods[a[i]%3].push_back(i);
        }
        else mods[a[i]%3].push_back(i);
    }
    for(auto it:mods){
        for(int i:it.second){
            for(int j:it.second){
                sum+=(a[i]^a[j]);
            }
        }
    }
    return sum/2;
}
 
int main(){
      fast;
 
      //txtio;
      int t=0;
      cin>>t;
      while(t--){
        int n;
         vecv;
         cin>>n;
         forn{
            int temp;
            cin>>temp;
            v.push_back(temp);
         }
        cout<<contributions(n,v)<<endl;
 
 
      }
      return 0;
}