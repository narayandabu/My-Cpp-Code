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
 
 
 // strings,implematation.
 //https://codeforces.com/contest/118/problem/A
 
void solve(){
    string s,s1;
    cin>>s;
    for (int i = 0; i < s.length(); i++){
        s[i]=(tolower(s[i]));
    }
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='a' or s[i]=='o' or s[i]=='y' or s[i]=='u' or s[i]=='i' or s[i]=='e'){
            s.erase(i,1);
            i--;
        }
    }
    int size=s.size();
    for (int i = 0; i < 2*size; i+=2){
        s.insert(s.begin()+i,'.');
    }
    cout<<s;
    
          
 
 
 
  return;
}
 
int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      //txtio;
      solve();
      return 0;
}