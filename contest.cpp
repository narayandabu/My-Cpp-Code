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
          
      int n;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++){
            cin>>arr[i];  
      }
      for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                for(int k=0;k<n;k++){
                if(2*arr[i]==arr[j]+arr[k] and i!=j and j!=k and i!=k){
                  cout<<"No\n";
                  return;
                }   
                }
            }
            
      }
      cout<<"Yes\n";
      
 
 
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