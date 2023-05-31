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
 
 
 
 
 
void solve(){

    int m,n,maxinsub,ind,ct{0};
    cin>>n>>m;
    int arr[n][m];
    int best[n];
    unordered_set<int> st; 
    for (int i = 0; i < n; i++){
        best[i]=0;
        string temp;
        cin>>temp;
        int j=m-1;
        for (int j = 0; j < m; j++){
            arr[i][j]=(temp[j]-'0');
        }
    }
    
    for (int i = 0; i < m; i++){
        maxinsub=0;
        for (int j = 0; j < n; j++){
           maxinsub=max(maxinsub,arr[j][i]);
        }
        for(int j = 0; j < n; j++){
           if(arr[j][i]==maxinsub)best[j]++;    
        }
    }
    for (int i = 0; i < n; i++){
        if(best[i]>0)ct++;       
    }
    cout<<ct;
  return;
}
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);  
      solve();  
      return 0;
}