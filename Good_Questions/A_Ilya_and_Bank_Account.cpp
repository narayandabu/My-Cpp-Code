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
 
// numbertheory,implementation.
//https://codeforces.com/contest/313/problem/A
 
 
 
void solve(){
          
        int n;
        cin>>n;
        if(n>=0)cout<<n;
        else{
            int last,seclast;
            last=(-1)*(n%10);
            seclast=((-1)*(n%100))/10;
            if(last>=seclast){
                n/=10;
                cout<<n;
            }
            else{
                n/=100;
                n*=10;
                n-=last;
                cout<<n;
            }
        }
        return ;
}
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      solve();
      return 0;
}