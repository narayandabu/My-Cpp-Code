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
 
//https://codeforces.com/contest/330/problem/A
 
 
 
void solve(){
          
 int n,m,ans{0};
 cin>>n>>m;
 char cake[n][m];
    for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)cin>>cake[i][j];        
    set<pair<int,int>> eaten;
    for (int i = 0; i < n; i++){
        int tempct{0};
        bool evstw=false;
        for (int j = 0; j < m; j++){
            if(cake[i][j]=='S'){
                tempct=0;
                evstw=true;
                break;
            }
            else tempct++;
        }
        if(evstw==false){
            ans+=tempct;
            for (int j = 0; j < m; j++)eaten.insert({i,j});
        }        
    }
    for (int i = 0; i < m; i++){
        int tempct{0};
        bool evstw=false;
        for (int j = 0; j < n; j++){
            if(cake[j][i]=='S'){
                tempct=0;
                evstw=true;
                break;
            }
            else tempct++;
        }
        if(evstw==false){
            for (int j = 0; j < n; j++){
                if(eaten.find({j,i})==eaten.end())ans++;
            }
        }        
    }
    cout<<ans<<nl;
 
  return;
}
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      solve();
}